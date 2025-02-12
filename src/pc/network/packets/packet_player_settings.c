#include <stdio.h>
#include "../network.h"
#include "pc/debuglog.h"

void network_send_player_settings(void) {
    char playerName[MAX_PLAYER_STRING+1] = { 0 };
    snprintf(playerName, MAX_PLAYER_STRING, "%s", configPlayerName);

    struct Packet p = { 0 };
    packet_init(&p, PACKET_PLAYER_SETTINGS, true, PLMT_NONE);
    packet_write(&p, &gNetworkPlayers[0].globalIndex, sizeof(u8));
    packet_write(&p, playerName, MAX_PLAYER_STRING * sizeof(u8));
    packet_write(&p, &configPlayerModel, sizeof(u8));
    packet_write(&p, &configPlayerPalette, sizeof(u8));

    if (gNetworkPlayerLocal != NULL) {
        snprintf(gNetworkPlayerLocal->name, MAX_PLAYER_STRING, "%s", playerName);
    }

    network_send(&p);
}

void network_receive_player_settings(struct Packet* p) {
    u8 globalId;
    char playerName[MAX_PLAYER_STRING+1] = { 0 };
    u8 playerModel;
    u8 playerPalette;

    packet_read(p, &globalId, sizeof(u8));
    packet_read(p, &playerName, MAX_PLAYER_STRING * sizeof(u8));
    packet_read(p, &playerModel, sizeof(u8));
    packet_read(p, &playerPalette, sizeof(u8));

    if (globalId == gNetworkPlayers[0].globalIndex || globalId > MAX_PLAYERS) {
        LOG_ERROR("Received player settings from improper player.");
        return;
    }

    struct NetworkPlayer* np = network_player_from_global_index(globalId);
    snprintf(np->name, MAX_PLAYER_STRING, "%s", playerName);
    np->modelIndex = playerModel;
    np->paletteIndex = playerPalette;

    network_player_update_model(np->localIndex);
}
