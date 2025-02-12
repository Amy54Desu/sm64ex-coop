## [:rewind: Lua Reference](lua.md)

# Supported Constants
- [audio_defines.h](#audio_defines.h)
- [camera.h](#camera.h)
- [characters.h](#characters.h)
    - [CharacterSound](#CharacterSound)
    - [CharacterType](#CharacterType)
- [djui_hud_utils.h](#djui_hud_utils.h)
    - [DjuiFontType](#DjuiFontType)
    - [HudUtilsResolution](#HudUtilsResolution)
- [interaction.c](#interaction.c)
    - [InteractionFlag](#InteractionFlag)
- [interaction.h](#interaction.h)
    - [InteractionType](#InteractionType)
- [mario_animation_ids.h](#mario_animation_ids.h)
    - [MarioAnimID](#MarioAnimID)
- [network_player.h](#network_player.h)
    - [NetworkPlayerType](#NetworkPlayerType)
- [os_cont.h](#os_cont.h)
- [sm64.h](#sm64.h)
- [smlua_hooks.h](#smlua_hooks.h)
    - [LuaHookedEventType](#LuaHookedEventType)
- [types.h](#types.h)
    - [AreaTimerType](#AreaTimerType)
    - [SpTaskState](#SpTaskState)

<br />

## [audio_defines.h](#audio_defines.h)
- NO_SOUND
- SOUNDARGS_MASK_BANK
- SOUNDARGS_MASK_PRIORITY
- SOUNDARGS_MASK_SOUNDID
- SOUNDARGS_MASK_STATUS
- SOUNDARGS_SHIFT_BANK
- SOUNDARGS_SHIFT_PRIORITY
- SOUNDARGS_SHIFT_SOUNDID
- SOUND_ACTION_BONK
- SOUND_ACTION_BOUNCE_OFF_OBJECT
- SOUND_ACTION_BRUSH_HAIR
- SOUND_ACTION_CLAP_HANDS_COLD
- SOUND_ACTION_CLIMB_DOWN_TREE
- SOUND_ACTION_CLIMB_UP_POLE
- SOUND_ACTION_CLIMB_UP_TREE
- SOUND_ACTION_FLYING_FAST
- SOUND_ACTION_HANGING_STEP
- SOUND_ACTION_HIT
- SOUND_ACTION_HIT_2
- SOUND_ACTION_HIT_3
- SOUND_ACTION_INTRO_UNK45E
- SOUND_ACTION_INTRO_UNK45F
- SOUND_ACTION_KEY_SWISH
- SOUND_ACTION_METAL_BONK
- SOUND_ACTION_METAL_HEAVY_LANDING
- SOUND_ACTION_METAL_JUMP
- SOUND_ACTION_METAL_JUMP_WATER
- SOUND_ACTION_METAL_LANDING
- SOUND_ACTION_METAL_LAND_WATER
- SOUND_ACTION_METAL_STEP
- SOUND_ACTION_METAL_STEP_TIPTOE
- SOUND_ACTION_METAL_STEP_WATER
- SOUND_ACTION_PAT_BACK
- SOUND_ACTION_QUICKSAND_STEP
- SOUND_ACTION_READ_SIGN
- SOUND_ACTION_SHRINK_INTO_BBH
- SOUND_ACTION_SIDE_FLIP_UNK
- SOUND_ACTION_SPIN
- SOUND_ACTION_SWIM
- SOUND_ACTION_SWIM_FAST
- SOUND_ACTION_TELEPORT
- SOUND_ACTION_TERRAIN_BODY_HIT_GROUND
- SOUND_ACTION_TERRAIN_HEAVY_LANDING
- SOUND_ACTION_TERRAIN_JUMP
- SOUND_ACTION_TERRAIN_LANDING
- SOUND_ACTION_TERRAIN_STEP
- SOUND_ACTION_TERRAIN_STEP_TIPTOE
- SOUND_ACTION_TERRAIN_STUCK_IN_GROUND
- SOUND_ACTION_THROW
- SOUND_ACTION_TWIRL
- SOUND_ACTION_UNK3C
- SOUND_ACTION_UNK53
- SOUND_ACTION_UNK54
- SOUND_ACTION_UNK55
- SOUND_ACTION_UNK5D
- SOUND_ACTION_UNKNOWN430
- SOUND_ACTION_UNKNOWN431
- SOUND_ACTION_UNKNOWN432
- SOUND_ACTION_UNKNOWN434
- SOUND_ACTION_UNKNOWN43D
- SOUND_ACTION_UNKNOWN43E
- SOUND_ACTION_UNKNOWN458
- SOUND_ACTION_UNKNOWN45C
- SOUND_ACTION_UNSTUCK_FROM_GROUND
- SOUND_AIR_AMP_BUZZ
- SOUND_AIR_BLOW_FIRE
- SOUND_AIR_BLOW_WIND
- SOUND_AIR_BOBOMB_LIT_FUSE
- SOUND_AIR_BOWSER_SPIT_FIRE
- SOUND_AIR_CASTLE_OUTDOORS_AMBIENT
- SOUND_AIR_CHUCKYA_MOVE
- SOUND_AIR_HEAVEHO_MOVE
- SOUND_AIR_HOWLING_WIND
- SOUND_AIR_LAKITU_FLY
- SOUND_AIR_LAKITU_FLY_HIGHPRIO
- SOUND_AIR_PEACH_TWINKLE
- SOUND_AIR_ROUGH_SLIDE
- SOUND_AIR_UNK01
- SOUND_AIR_UNK07
- SOUND_ENV_BOAT_ROCKING1
- SOUND_ENV_DRONING1
- SOUND_ENV_DRONING2
- SOUND_ENV_ELEVATOR1
- SOUND_ENV_ELEVATOR2
- SOUND_ENV_ELEVATOR3
- SOUND_ENV_ELEVATOR4
- SOUND_ENV_ELEVATOR4_2
- SOUND_ENV_MERRY_GO_ROUND_CREAKING
- SOUND_ENV_METAL_BOX_PUSH
- SOUND_ENV_MOVINGSAND
- SOUND_ENV_MOVING_SAND_SNOW
- SOUND_ENV_SINK_QUICKSAND
- SOUND_ENV_SLIDING
- SOUND_ENV_STAR
- SOUND_ENV_UNK07
- SOUND_ENV_UNK12
- SOUND_ENV_UNKNOWN2
- SOUND_ENV_UNKNOWN4
- SOUND_ENV_WATER
- SOUND_ENV_WATERFALL1
- SOUND_ENV_WATERFALL2
- SOUND_ENV_WATER_DRAIN
- SOUND_ENV_WIND1
- SOUND_ENV_WIND2
- SOUND_GENERAL2_1UP_APPEAR
- SOUND_GENERAL2_BIRD_CHIRP2
- SOUND_GENERAL2_BOBOMB_EXPLOSION
- SOUND_GENERAL2_BOWSER_EXPLODE
- SOUND_GENERAL2_BOWSER_KEY
- SOUND_GENERAL2_PURPLE_SWITCH
- SOUND_GENERAL2_PYRAMID_TOP_EXPLOSION
- SOUND_GENERAL2_PYRAMID_TOP_SPIN
- SOUND_GENERAL2_RIGHT_ANSWER
- SOUND_GENERAL2_ROTATING_BLOCK_ALERT
- SOUND_GENERAL2_ROTATING_BLOCK_CLICK
- SOUND_GENERAL2_SPINDEL_ROLL
- SOUND_GENERAL2_STAR_APPEARS
- SOUND_GENERAL2_SWITCH_TICK_FAST
- SOUND_GENERAL2_SWITCH_TICK_SLOW
- SOUND_GENERAL_ACTIVATE_CAP_SWITCH
- SOUND_GENERAL_BIG_CLOCK
- SOUND_GENERAL_BIG_POUND
- SOUND_GENERAL_BIRDS_FLY_AWAY
- SOUND_GENERAL_BOAT_ROCK
- SOUND_GENERAL_BOAT_TILT1
- SOUND_GENERAL_BOAT_TILT2
- SOUND_GENERAL_BOING1
- SOUND_GENERAL_BOING2
- SOUND_GENERAL_BOING2_LOWPRIO
- SOUND_GENERAL_BOING3
- SOUND_GENERAL_BOWSER_BOMB_EXPLOSION
- SOUND_GENERAL_BOWSER_PLATFORM
- SOUND_GENERAL_BOWSER_PLATFORM_2
- SOUND_GENERAL_BOX_LANDING
- SOUND_GENERAL_BOX_LANDING_2
- SOUND_GENERAL_BREAK_BOX
- SOUND_GENERAL_BUBBLES
- SOUND_GENERAL_BUTTON_PRESS
- SOUND_GENERAL_BUTTON_PRESS_2
- SOUND_GENERAL_BUTTON_PRESS_2_LOWPRIO
- SOUND_GENERAL_BUTTON_PRESS_LOWPRIO
- SOUND_GENERAL_CAGE_OPEN
- SOUND_GENERAL_CANNON_UP
- SOUND_GENERAL_CASTLE_TRAP_OPEN
- SOUND_GENERAL_CHAIN_CHOMP1
- SOUND_GENERAL_CHAIN_CHOMP2
- SOUND_GENERAL_CLAM_SHELL1
- SOUND_GENERAL_CLAM_SHELL2
- SOUND_GENERAL_CLAM_SHELL3
- SOUND_GENERAL_CLOSE_IRON_DOOR
- SOUND_GENERAL_CLOSE_WOOD_DOOR
- SOUND_GENERAL_COIN
- SOUND_GENERAL_COIN_DROP
- SOUND_GENERAL_COIN_SPURT
- SOUND_GENERAL_COIN_SPURT_2
- SOUND_GENERAL_COIN_SPURT_EU
- SOUND_GENERAL_COIN_WATER
- SOUND_GENERAL_COLLECT_1UP
- SOUND_GENERAL_DONUT_PLATFORM_EXPLOSION
- SOUND_GENERAL_DOOR_INSERT_KEY
- SOUND_GENERAL_DOOR_TURN_KEY
- SOUND_GENERAL_ELEVATOR_MOVE
- SOUND_GENERAL_ELEVATOR_MOVE_2
- SOUND_GENERAL_ENEMY_ALERT1
- SOUND_GENERAL_EXPLOSION6
- SOUND_GENERAL_EXPLOSION7
- SOUND_GENERAL_FLAME_OUT
- SOUND_GENERAL_GRAND_STAR
- SOUND_GENERAL_GRAND_STAR_JUMP
- SOUND_GENERAL_GRINDEL_ROLL
- SOUND_GENERAL_HAUNTED_CHAIR
- SOUND_GENERAL_HAUNTED_CHAIR_MOVE
- SOUND_GENERAL_HEART_SPIN
- SOUND_GENERAL_LEVEL_SELECT_CHANGE
- SOUND_GENERAL_LOUD_POUND
- SOUND_GENERAL_LOUD_POUND2
- SOUND_GENERAL_METAL_POUND
- SOUND_GENERAL_MOVING_IN_SAND
- SOUND_GENERAL_MOVING_PLATFORM_SWITCH
- SOUND_GENERAL_MOVING_WATER
- SOUND_GENERAL_OPEN_CHEST
- SOUND_GENERAL_OPEN_IRON_DOOR
- SOUND_GENERAL_OPEN_WOOD_DOOR
- SOUND_GENERAL_PAINTING_EJECT
- SOUND_GENERAL_PENDULUM_SWING
- SOUND_GENERAL_PLATFORM
- SOUND_GENERAL_POUND_ROCK
- SOUND_GENERAL_POUND_WOOD_POST
- SOUND_GENERAL_QUIET_BUBBLE
- SOUND_GENERAL_QUIET_BUBBLE2
- SOUND_GENERAL_QUIET_POUND1
- SOUND_GENERAL_QUIET_POUND1_LOWPRIO
- SOUND_GENERAL_QUIET_POUND2
- SOUND_GENERAL_RACE_GUN_SHOT
- SOUND_GENERAL_RED_COIN
- SOUND_GENERAL_SHAKE_COFFIN
- SOUND_GENERAL_SHORT_POUND1
- SOUND_GENERAL_SHORT_POUND2
- SOUND_GENERAL_SHORT_POUND3
- SOUND_GENERAL_SHORT_POUND4
- SOUND_GENERAL_SHORT_POUND5
- SOUND_GENERAL_SHORT_POUND6
- SOUND_GENERAL_SHORT_STAR
- SOUND_GENERAL_SOFT_LANDING
- SOUND_GENERAL_SPLATTERING
- SOUND_GENERAL_STAR_APPEARS
- SOUND_GENERAL_STAR_DOOR_CLOSE
- SOUND_GENERAL_STAR_DOOR_OPEN
- SOUND_GENERAL_SWISH_AIR
- SOUND_GENERAL_SWISH_AIR_2
- SOUND_GENERAL_SWISH_WATER
- SOUND_GENERAL_SWITCH_DOOR_OPEN
- SOUND_GENERAL_UNK32
- SOUND_GENERAL_UNK45
- SOUND_GENERAL_UNK46
- SOUND_GENERAL_UNK46_LOWPRIO
- SOUND_GENERAL_UNKNOWN1
- SOUND_GENERAL_UNKNOWN1_2
- SOUND_GENERAL_UNKNOWN3
- SOUND_GENERAL_UNKNOWN3_2
- SOUND_GENERAL_UNKNOWN3_LOWPRIO
- SOUND_GENERAL_UNKNOWN4
- SOUND_GENERAL_UNKNOWN4_LOWPRIO
- SOUND_GENERAL_VANISH_SFX
- SOUND_GENERAL_VOLCANO_EXPLOSION
- SOUND_GENERAL_WALL_EXPLOSION
- SOUND_GENERAL_WATER_LEVEL_TRIG
- SOUND_GENERAL_YOSHI_TALK
- SOUND_GENERAL_YOSHI_WALK
- SOUND_LO_BITFLAG_UNK1
- SOUND_LO_BITFLAG_UNK8
- SOUND_MARIO_ATTACKED
- SOUND_MARIO_COUGHING1
- SOUND_MARIO_COUGHING2
- SOUND_MARIO_COUGHING3
- SOUND_MARIO_DOH
- SOUND_MARIO_DROWNING
- SOUND_MARIO_DYING
- SOUND_MARIO_EEUH
- SOUND_MARIO_GAME_OVER
- SOUND_MARIO_GROUND_POUND_WAH
- SOUND_MARIO_HAHA
- SOUND_MARIO_HAHA_2
- SOUND_MARIO_HELLO
- SOUND_MARIO_HERE_WE_GO
- SOUND_MARIO_HOOHOO
- SOUND_MARIO_HRMM
- SOUND_MARIO_IMA_TIRED
- SOUND_MARIO_MAMA_MIA
- SOUND_MARIO_OKEY_DOKEY
- SOUND_MARIO_ON_FIRE
- SOUND_MARIO_OOOF
- SOUND_MARIO_OOOF2
- SOUND_MARIO_PANTING
- SOUND_MARIO_PANTING_COLD
- SOUND_MARIO_PRESS_START_TO_PLAY
- SOUND_MARIO_PUNCH_HOO
- SOUND_MARIO_PUNCH_WAH
- SOUND_MARIO_PUNCH_YAH
- SOUND_MARIO_SNORING1
- SOUND_MARIO_SNORING2
- SOUND_MARIO_SNORING3
- SOUND_MARIO_SO_LONGA_BOWSER
- SOUND_MARIO_TWIRL_BOUNCE
- SOUND_MARIO_UH
- SOUND_MARIO_UH2
- SOUND_MARIO_UH2_2
- SOUND_MARIO_WAAAOOOW
- SOUND_MARIO_WAH2
- SOUND_MARIO_WHOA
- SOUND_MARIO_YAHOO
- SOUND_MARIO_YAHOO_WAHA_YIPPEE
- SOUND_MARIO_YAH_WAH_HOO
- SOUND_MARIO_YAWNING
- SOUND_MENU_BOWSER_LAUGH
- SOUND_MENU_CAMERA_BUZZ
- SOUND_MENU_CAMERA_TURN
- SOUND_MENU_CAMERA_UNUSED1
- SOUND_MENU_CAMERA_UNUSED2
- SOUND_MENU_CAMERA_ZOOM_IN
- SOUND_MENU_CAMERA_ZOOM_OUT
- SOUND_MENU_CHANGE_SELECT
- SOUND_MENU_CLICK_CHANGE_VIEW
- SOUND_MENU_CLICK_FILE_SELECT
- SOUND_MENU_COIN_ITS_A_ME_MARIO
- SOUND_MENU_COLLECT_RED_COIN
- SOUND_MENU_COLLECT_SECRET
- SOUND_MENU_ENTER_HOLE
- SOUND_MENU_ENTER_PIPE
- SOUND_MENU_EXIT_A_SIGN
- SOUND_MENU_EXIT_PIPE
- SOUND_MENU_HAND_APPEAR
- SOUND_MENU_HAND_DISAPPEAR
- SOUND_MENU_LET_GO_MARIO_FACE
- SOUND_MENU_MARIO_CASTLE_WARP
- SOUND_MENU_MARIO_CASTLE_WARP2
- SOUND_MENU_MESSAGE_APPEAR
- SOUND_MENU_MESSAGE_DISAPPEAR
- SOUND_MENU_MESSAGE_NEXT_PAGE
- SOUND_MENU_PAUSE
- SOUND_MENU_PAUSE_2
- SOUND_MENU_PAUSE_HIGHPRIO
- SOUND_MENU_PINCH_MARIO_FACE
- SOUND_MENU_POWER_METER
- SOUND_MENU_READ_A_SIGN
- SOUND_MENU_REVERSE_PAUSE
- SOUND_MENU_STAR_SOUND
- SOUND_MENU_STAR_SOUND_LETS_A_GO
- SOUND_MENU_STAR_SOUND_OKEY_DOKEY
- SOUND_MENU_THANK_YOU_PLAYING_MY_GAME
- SOUND_MENU_UNK0C
- SOUND_MENU_UNK10
- SOUND_MENU_YOSHI_GAIN_LIVES
- SOUND_MOVING_AIM_CANNON
- SOUND_MOVING_ALMOST_DROWNING
- SOUND_MOVING_FLYING
- SOUND_MOVING_LAVA_BURN
- SOUND_MOVING_QUICKSAND_DEATH
- SOUND_MOVING_RIDING_SHELL_LAVA
- SOUND_MOVING_SHOCKED
- SOUND_MOVING_SLIDE_DOWN_POLE
- SOUND_MOVING_SLIDE_DOWN_TREE
- SOUND_MOVING_TERRAIN_RIDING_SHELL
- SOUND_MOVING_TERRAIN_SLIDE
- SOUND_MOVING_UNK1A
- SOUND_NO_ECHO
- SOUND_NO_FREQUENCY_LOSS
- SOUND_NO_PRIORITY_LOSS
- SOUND_NO_VOLUME_LOSS
- SOUND_OBJ2_BABY_PENGUIN_YELL
- SOUND_OBJ2_BIRD_CHIRP1
- SOUND_OBJ2_BOSS_DIALOG_GRUNT
- SOUND_OBJ2_BOWSER_PUZZLE_PIECE_MOVE
- SOUND_OBJ2_BOWSER_ROAR
- SOUND_OBJ2_BOWSER_TELEPORT
- SOUND_OBJ2_BULLY_ATTACKED
- SOUND_OBJ2_EYEROK_SOUND_LONG
- SOUND_OBJ2_EYEROK_SOUND_SHORT
- SOUND_OBJ2_KING_BOBOMB_DAMAGE
- SOUND_OBJ2_LARGE_BULLY_ATTACKED
- SOUND_OBJ2_MONTY_MOLE_APPEAR
- SOUND_OBJ2_MRI_SPINNING
- SOUND_OBJ2_PIRANHA_PLANT_BITE
- SOUND_OBJ2_PIRANHA_PLANT_DYING
- SOUND_OBJ2_SCUTTLEBUG_ALERT
- SOUND_OBJ2_SCUTTLEBUG_WALK
- SOUND_OBJ2_SWOOP
- SOUND_OBJ2_WHOMP_SOUND_SHORT
- SOUND_OBJ_BABY_PENGUIN_DIVE
- SOUND_OBJ_BABY_PENGUIN_WALK
- SOUND_OBJ_BIG_PENGUIN_WALK
- SOUND_OBJ_BIG_PENGUIN_YELL
- SOUND_OBJ_BIRD_CHIRP3
- SOUND_OBJ_BOBOMB_BUDDY_TALK
- SOUND_OBJ_BOBOMB_WALK
- SOUND_OBJ_BOO_BOUNCE_TOP
- SOUND_OBJ_BOO_LAUGH_LONG
- SOUND_OBJ_BOO_LAUGH_SHORT
- SOUND_OBJ_BOWSER_DEFEATED
- SOUND_OBJ_BOWSER_INHALING
- SOUND_OBJ_BOWSER_INTRO_LAUGH
- SOUND_OBJ_BOWSER_LAUGH
- SOUND_OBJ_BOWSER_SPINNING
- SOUND_OBJ_BOWSER_TAIL_PICKUP
- SOUND_OBJ_BOWSER_WALK
- SOUND_OBJ_BUBBA_CHOMP
- SOUND_OBJ_BULLY_EXPLODE
- SOUND_OBJ_BULLY_EXPLODE_2
- SOUND_OBJ_BULLY_METAL
- SOUND_OBJ_BULLY_WALK
- SOUND_OBJ_BULLY_WALKING
- SOUND_OBJ_CANNON1
- SOUND_OBJ_CANNON2
- SOUND_OBJ_CANNON3
- SOUND_OBJ_CANNON4
- SOUND_OBJ_CHUCKYA_DEATH
- SOUND_OBJ_DEFAULT_DEATH
- SOUND_OBJ_DIVING_INTO_WATER
- SOUND_OBJ_DIVING_IN_WATER
- SOUND_OBJ_DORRIE
- SOUND_OBJ_DYING_ENEMY1
- SOUND_OBJ_DYING_ENEMY2
- SOUND_OBJ_EEL
- SOUND_OBJ_EEL_2
- SOUND_OBJ_ENEMY_DEATH_HIGH
- SOUND_OBJ_ENEMY_DEATH_LOW
- SOUND_OBJ_ENEMY_DEFEAT_SHRINK
- SOUND_OBJ_EVIL_LAKITU_THROW
- SOUND_OBJ_EYEROK_EXPLODE
- SOUND_OBJ_EYEROK_SHOW_EYE
- SOUND_OBJ_FLAME_BLOWN
- SOUND_OBJ_GOOMBA_ALERT
- SOUND_OBJ_GOOMBA_WALK
- SOUND_OBJ_HEAVEHO_TOSSED
- SOUND_OBJ_JUMP_WALK_WATER
- SOUND_OBJ_KING_BOBOMB
- SOUND_OBJ_KING_BOBOMB_JUMP
- SOUND_OBJ_KING_BOBOMB_TALK
- SOUND_OBJ_KING_WHOMP_DEATH
- SOUND_OBJ_KLEPTO1
- SOUND_OBJ_KLEPTO2
- SOUND_OBJ_KOOPA_DAMAGE
- SOUND_OBJ_KOOPA_FLYGUY_DEATH
- SOUND_OBJ_KOOPA_TALK
- SOUND_OBJ_KOOPA_THE_QUICK_WALK
- SOUND_OBJ_KOOPA_WALK
- SOUND_OBJ_MAD_PIANO_CHOMPING
- SOUND_OBJ_MIPS_RABBIT
- SOUND_OBJ_MIPS_RABBIT_WATER
- SOUND_OBJ_MONTY_MOLE_ATTACK
- SOUND_OBJ_MRI_DEATH
- SOUND_OBJ_MRI_SHOOT
- SOUND_OBJ_MR_BLIZZARD_ALERT
- SOUND_OBJ_PIRANHA_PLANT_APPEAR
- SOUND_OBJ_PIRANHA_PLANT_SHRINK
- SOUND_OBJ_POKEY_DEATH
- SOUND_OBJ_POUNDING1
- SOUND_OBJ_POUNDING1_HIGHPRIO
- SOUND_OBJ_POUNDING_CANNON
- SOUND_OBJ_POUNDING_LOUD
- SOUND_OBJ_SKEETER_WALK
- SOUND_OBJ_SNOWMAN_BOUNCE
- SOUND_OBJ_SNOWMAN_EXPLODE
- SOUND_OBJ_SNOW_SAND1
- SOUND_OBJ_SNOW_SAND2
- SOUND_OBJ_SNUFIT_SHOOT
- SOUND_OBJ_SNUFIT_SKEETER_DEATH
- SOUND_OBJ_SOMETHING_LANDING
- SOUND_OBJ_SPINY_UNK59
- SOUND_OBJ_STOMPED
- SOUND_OBJ_SUSHI_SHARK_WATER_SOUND
- SOUND_OBJ_SWOOP_DEATH
- SOUND_OBJ_THWOMP
- SOUND_OBJ_UKIKI_CHATTER_IDLE
- SOUND_OBJ_UKIKI_CHATTER_LONG
- SOUND_OBJ_UKIKI_CHATTER_SHORT
- SOUND_OBJ_UKIKI_STEP_DEFAULT
- SOUND_OBJ_UKIKI_STEP_LEAVES
- SOUND_OBJ_UNK23
- SOUND_OBJ_UNKNOWN2
- SOUND_OBJ_UNKNOWN3
- SOUND_OBJ_UNKNOWN4
- SOUND_OBJ_UNKNOWN6
- SOUND_OBJ_WALKING_WATER
- SOUND_OBJ_WATER_BOMB_BOUNCING
- SOUND_OBJ_WHOMP_LOWPRIO
- SOUND_OBJ_WIGGLER_ATTACKED
- SOUND_OBJ_WIGGLER_DEATH
- SOUND_OBJ_WIGGLER_HIGH_PITCH
- SOUND_OBJ_WIGGLER_JUMP
- SOUND_OBJ_WIGGLER_LOW_PITCH
- SOUND_OBJ_WIGGLER_TALK
- SOUND_PEACH_BAKE_A_CAKE
- SOUND_PEACH_DEAR_MARIO
- SOUND_PEACH_FOR_MARIO
- SOUND_PEACH_MARIO
- SOUND_PEACH_MARIO2
- SOUND_PEACH_POWER_OF_THE_STARS
- SOUND_PEACH_SOMETHING_SPECIAL
- SOUND_PEACH_THANKS_TO_YOU
- SOUND_PEACH_THANK_YOU_MARIO
- SOUND_STATUS_PLAYING
- SOUND_STATUS_STARTING
- SOUND_STATUS_STOPPED
- SOUND_TERRAIN_DEFAULT
- SOUND_TERRAIN_GRASS
- SOUND_TERRAIN_ICE
- SOUND_TERRAIN_SAND
- SOUND_TERRAIN_SNOW
- SOUND_TERRAIN_SPOOKY
- SOUND_TERRAIN_STONE
- SOUND_TERRAIN_WATER
- SOUND_VIBRATO

<br />

## [camera.h](#camera.h)
- CAMERA_MODE_8_DIRECTIONS
- CAMERA_MODE_BEHIND_MARIO
- CAMERA_MODE_BOSS_FIGHT
- CAMERA_MODE_CLOSE
- CAMERA_MODE_C_UP
- CAMERA_MODE_FIXED
- CAMERA_MODE_FREE_ROAM
- CAMERA_MODE_INSIDE_CANNON
- CAMERA_MODE_NEWCAM
- CAMERA_MODE_NONE
- CAMERA_MODE_OUTWARD_RADIAL
- CAMERA_MODE_PARALLEL_TRACKING
- CAMERA_MODE_RADIAL
- CAMERA_MODE_SLIDE_HOOT
- CAMERA_MODE_SPIRAL_STAIRS
- CAMERA_MODE_WATER_SURFACE
- CAM_ANGLE_LAKITU
- CAM_ANGLE_MARIO
- CAM_EVENT_BOWSER_INIT
- CAM_EVENT_BOWSER_JUMP
- CAM_EVENT_BOWSER_THROW_BOUNCE
- CAM_EVENT_CANNON
- CAM_EVENT_DOOR
- CAM_EVENT_DOOR_WARP
- CAM_EVENT_SHOT_FROM_CANNON
- CAM_EVENT_START_CREDITS
- CAM_EVENT_START_ENDING
- CAM_EVENT_START_END_WAVING
- CAM_EVENT_START_GRAND_STAR
- CAM_EVENT_START_INTRO
- CAM_EVENT_UNUSED_3
- CAM_FLAG_BEHIND_MARIO_POST_DOOR
- CAM_FLAG_BLOCK_AREA_PROCESSING
- CAM_FLAG_BLOCK_SMOOTH_MOVEMENT
- CAM_FLAG_CAM_NEAR_WALL
- CAM_FLAG_CCM_SLIDE_SHORTCUT
- CAM_FLAG_CHANGED_PARTRACK_INDEX
- CAM_FLAG_COLLIDED_WITH_WALL
- CAM_FLAG_FRAME_AFTER_CAM_INIT
- CAM_FLAG_SLEEPING
- CAM_FLAG_SMOOTH_MOVEMENT
- CAM_FLAG_START_TRANSITION
- CAM_FLAG_TRANSITION_OUT_OF_C_UP
- CAM_FLAG_UNUSED_13
- CAM_FLAG_UNUSED_7
- CAM_FLAG_UNUSED_8
- CAM_FLAG_UNUSED_CUTSCENE_ACTIVE
- CAM_FOV_APP_20
- CAM_FOV_APP_30
- CAM_FOV_APP_45
- CAM_FOV_APP_60
- CAM_FOV_APP_80
- CAM_FOV_BBH
- CAM_FOV_DEFAULT
- CAM_FOV_SET_29
- CAM_FOV_SET_30
- CAM_FOV_SET_45
- CAM_FOV_ZOOM_30
- CAM_MODE_LAKITU_WAS_ZOOMED_OUT
- CAM_MODE_MARIO_ACTIVE
- CAM_MODE_MARIO_SELECTED
- CAM_MOVE_ALREADY_ZOOMED_OUT
- CAM_MOVE_C_UP_MODE
- CAM_MOVE_ENTERED_ROTATE_SURFACE
- CAM_MOVE_FIX_IN_PLACE
- CAM_MOVE_INIT_CAMERA
- CAM_MOVE_METAL_BELOW_WATER
- CAM_MOVE_PAUSE_SCREEN
- CAM_MOVE_RESTRICT
- CAM_MOVE_RETURN_TO_MIDDLE
- CAM_MOVE_ROTATE
- CAM_MOVE_ROTATE_LEFT
- CAM_MOVE_ROTATE_RIGHT
- CAM_MOVE_STARTED_EXITING_C_UP
- CAM_MOVE_SUBMERGED
- CAM_MOVE_UNKNOWN_11
- CAM_MOVE_UNKNOWN_8
- CAM_MOVE_ZOOMED_OUT
- CAM_MOVING_INTO_MODE
- CAM_SELECTION_FIXED
- CAM_SELECTION_MARIO
- CAM_SOUND_C_UP_PLAYED
- CAM_SOUND_FIXED_ACTIVE
- CAM_SOUND_MARIO_ACTIVE
- CAM_SOUND_NORMAL_ACTIVE
- CAM_SOUND_UNUSED_SELECT_FIXED
- CAM_SOUND_UNUSED_SELECT_MARIO
- CAM_STATUS_C_DOWN
- CAM_STATUS_C_MODE_GROUP
- CAM_STATUS_C_UP
- CAM_STATUS_FIXED
- CAM_STATUS_LAKITU
- CAM_STATUS_MARIO
- CAM_STATUS_MODE_GROUP
- CAM_STATUS_NONE
- CUTSCENE_0F_UNUSED
- CUTSCENE_CAP_SWITCH_PRESS
- CUTSCENE_CREDITS
- CUTSCENE_DANCE_CLOSEUP
- CUTSCENE_DANCE_DEFAULT
- CUTSCENE_DANCE_FLY_AWAY
- CUTSCENE_DANCE_ROTATE
- CUTSCENE_DEATH_EXIT
- CUTSCENE_DEATH_ON_BACK
- CUTSCENE_DEATH_ON_STOMACH
- CUTSCENE_DIALOG
- CUTSCENE_DOOR_PULL
- CUTSCENE_DOOR_PULL_MODE
- CUTSCENE_DOOR_PUSH
- CUTSCENE_DOOR_PUSH_MODE
- CUTSCENE_DOOR_WARP
- CUTSCENE_ENDING
- CUTSCENE_END_WAVING
- CUTSCENE_ENTER_BOWSER_ARENA
- CUTSCENE_ENTER_CANNON
- CUTSCENE_ENTER_PAINTING
- CUTSCENE_ENTER_POOL
- CUTSCENE_ENTER_PYRAMID_TOP
- CUTSCENE_EXIT_BOWSER_DEATH
- CUTSCENE_EXIT_BOWSER_SUCC
- CUTSCENE_EXIT_FALL_WMOTR
- CUTSCENE_EXIT_PAINTING_SUCC
- CUTSCENE_EXIT_SPECIAL_SUCC
- CUTSCENE_EXIT_WATERFALL
- CUTSCENE_GRAND_STAR
- CUTSCENE_INTRO_PEACH
- CUTSCENE_KEY_DANCE
- CUTSCENE_LOOP
- CUTSCENE_NONPAINTING_DEATH
- CUTSCENE_PREPARE_CANNON
- CUTSCENE_QUICKSAND_DEATH
- CUTSCENE_RACE_DIALOG
- CUTSCENE_READ_MESSAGE
- CUTSCENE_RED_COIN_STAR_SPAWN
- CUTSCENE_SLIDING_DOORS_OPEN
- CUTSCENE_SSL_PYRAMID_EXPLODE
- CUTSCENE_STANDING_DEATH
- CUTSCENE_STAR_SPAWN
- CUTSCENE_STOP
- CUTSCENE_SUFFOCATION_DEATH
- CUTSCENE_UNLOCK_KEY_DOOR
- CUTSCENE_UNUSED_EXIT
- CUTSCENE_WATER_DEATH
- DOOR_DEFAULT
- DOOR_ENTER_LOBBY
- DOOR_LEAVING_SPECIAL
- HAND_CAM_SHAKE_CUTSCENE
- HAND_CAM_SHAKE_HANG_OWL
- HAND_CAM_SHAKE_HIGH
- HAND_CAM_SHAKE_LOW
- HAND_CAM_SHAKE_OFF
- HAND_CAM_SHAKE_STAR_DANCE
- HAND_CAM_SHAKE_UNUSED
- SHAKE_ATTACK
- SHAKE_ENV_BOWSER_JUMP
- SHAKE_ENV_BOWSER_THROW_BOUNCE
- SHAKE_ENV_EXPLOSION
- SHAKE_ENV_FALLING_BITS_PLAT
- SHAKE_ENV_JRB_SHIP_DRAIN
- SHAKE_ENV_PYRAMID_EXPLODE
- SHAKE_ENV_UNUSED_5
- SHAKE_ENV_UNUSED_6
- SHAKE_ENV_UNUSED_7
- SHAKE_FALL_DAMAGE
- SHAKE_FOV_LARGE
- SHAKE_FOV_MEDIUM
- SHAKE_FOV_SMALL
- SHAKE_FOV_UNUSED
- SHAKE_GROUND_POUND
- SHAKE_HIT_FROM_BELOW
- SHAKE_LARGE_DAMAGE
- SHAKE_MED_DAMAGE
- SHAKE_POS_BOWLING_BALL
- SHAKE_POS_LARGE
- SHAKE_POS_MEDIUM
- SHAKE_POS_SMALL
- SHAKE_SHOCK
- SHAKE_SMALL_DAMAGE

<br />

## [characters.h](#characters.h)

### [enum CharacterSound](#CharacterSound)
| Identifier | Value |
| :--------- | :---- |
| CHAR_SOUND_YAH_WAH_HOO | 0 |
| CHAR_SOUND_HOOHOO | 1 |
| CHAR_SOUND_YAHOO | 2 |
| CHAR_SOUND_UH | 3 |
| CHAR_SOUND_HRMM | 4 |
| CHAR_SOUND_WAH2 | 5 |
| CHAR_SOUND_WHOA | 6 |
| CHAR_SOUND_EEUH | 7 |
| CHAR_SOUND_ATTACKED | 8 |
| CHAR_SOUND_OOOF | 9 |
| CHAR_SOUND_OOOF2 | 10 |
| CHAR_SOUND_HERE_WE_GO | 11 |
| CHAR_SOUND_YAWNING | 12 |
| CHAR_SOUND_SNORING1 | 13 |
| CHAR_SOUND_SNORING2 | 14 |
| CHAR_SOUND_WAAAOOOW | 15 |
| CHAR_SOUND_HAHA | 16 |
| CHAR_SOUND_HAHA_2 | 17 |
| CHAR_SOUND_UH2 | 18 |
| CHAR_SOUND_UH2_2 | 19 |
| CHAR_SOUND_ON_FIRE | 20 |
| CHAR_SOUND_DYING | 21 |
| CHAR_SOUND_PANTING_COLD | 22 |
| CHAR_SOUND_PANTING | 23 |
| CHAR_SOUND_COUGHING1 | 24 |
| CHAR_SOUND_COUGHING2 | 25 |
| CHAR_SOUND_COUGHING3 | 26 |
| CHAR_SOUND_PUNCH_YAH | 27 |
| CHAR_SOUND_PUNCH_HOO | 28 |
| CHAR_SOUND_MAMA_MIA | 29 |
| CHAR_SOUND_GROUND_POUND_WAH | 30 |
| CHAR_SOUND_DROWNING | 31 |
| CHAR_SOUND_PUNCH_WAH | 32 |
| CHAR_SOUND_YAHOO_WAHA_YIPPEE | 33 |
| CHAR_SOUND_DOH | 34 |
| CHAR_SOUND_GAME_OVER | 35 |
| CHAR_SOUND_HELLO | 36 |
| CHAR_SOUND_PRESS_START_TO_PLAY | 37 |
| CHAR_SOUND_TWIRL_BOUNCE | 38 |
| CHAR_SOUND_SNORING3 | 39 |
| CHAR_SOUND_SO_LONGA_BOWSER | 40 |
| CHAR_SOUND_IMA_TIRED | 41 |
| CHAR_SOUND_MAX | 42 |

### [enum CharacterType](#CharacterType)
| Identifier | Value |
| :--------- | :---- |
| CT_MARIO | 0 |
| CT_LUIGI | 1 |
| CT_TOAD | 2 |
| CT_WALUIGI | 3 |
| CT_WARIO | 4 |
| CT_MAX | 5 |

<br />

## [djui_hud_utils.h](#djui_hud_utils.h)

### [enum DjuiFontType](#DjuiFontType)
| Identifier | Value |
| :--------- | :---- |
| FONT_NORMAL | 0 |
| FONT_MENU | 1 |
| FONT_HUD | 2 |
| FONT_COUNT | 3 |

### [enum HudUtilsResolution](#HudUtilsResolution)
| Identifier | Value |
| :--------- | :---- |
| RESOLUTION_DJUI | 0 |
| RESOLUTION_N64 | 1 |
| RESOLUTION_COUNT | 2 |

<br />

## [interaction.c](#interaction.c)
- INT_ANY_ATTACK
- INT_ATTACK_NOT_FROM_BELOW
- INT_ATTACK_NOT_WEAK_FROM_ABOVE
- INT_ATTACK_SLIDE

### [enum InteractionFlag](#InteractionFlag)
| Identifier | Value |
| :--------- | :---- |
| INT_GROUND_POUND_OR_TWIRL | (1 << 0) |
| INT_PUNCH | (1 << 1) |
| INT_KICK | (1 << 2) |
| INT_TRIP | (1 << 3) |
| INT_SLIDE_KICK | (1 << 4) |
| INT_FAST_ATTACK_OR_SHELL | (1 << 5) |
| INT_HIT_FROM_ABOVE | (1 << 6) |
| INT_HIT_FROM_BELOW | (1 << 7) |

<br />

## [interaction.h](#interaction.h)
- ATTACK_FAST_ATTACK
- ATTACK_FROM_ABOVE
- ATTACK_FROM_BELOW
- ATTACK_GROUND_POUND_OR_TWIRL
- ATTACK_KICK_OR_TRIP
- ATTACK_PUNCH
- INT_STATUS_ATTACKED_MARIO
- INT_STATUS_ATTACK_MASK
- INT_STATUS_GRABBED_MARIO
- INT_STATUS_HIT_BY_SHOCKWAVE
- INT_STATUS_HIT_MINE
- INT_STATUS_HOOT_GRABBED_BY_MARIO
- INT_STATUS_INTERACTED
- INT_STATUS_MARIO_DROP_OBJECT
- INT_STATUS_MARIO_UNK1
- INT_STATUS_MARIO_UNK2
- INT_STATUS_MARIO_UNK5
- INT_STATUS_MARIO_UNK6
- INT_STATUS_MARIO_UNK7
- INT_STATUS_STOP_RIDING
- INT_STATUS_TOUCHED_BOB_OMB
- INT_STATUS_TRAP_TURN
- INT_STATUS_WAS_ATTACKED
- INT_SUBTYPE_BIG_KNOCKBACK
- INT_SUBTYPE_DELAY_INVINCIBILITY
- INT_SUBTYPE_DROP_IMMEDIATELY
- INT_SUBTYPE_EATS_MARIO
- INT_SUBTYPE_FADING_WARP
- INT_SUBTYPE_GRABS_MARIO
- INT_SUBTYPE_GRAND_STAR
- INT_SUBTYPE_HOLDABLE_NPC
- INT_SUBTYPE_KICKABLE
- INT_SUBTYPE_NOT_GRABBABLE
- INT_SUBTYPE_NO_EXIT
- INT_SUBTYPE_NPC
- INT_SUBTYPE_SIGN
- INT_SUBTYPE_STAR_DOOR
- INT_SUBTYPE_TWIRL_BOUNCE

### [enum InteractionType](#InteractionType)
| Identifier | Value |
| :--------- | :---- |
| INTERACT_HOOT | (1 << 0) |
| INTERACT_GRABBABLE | (1 << 1) |
| INTERACT_DOOR | (1 << 2) |
| INTERACT_DAMAGE | (1 << 3) |
| INTERACT_COIN | (1 << 4) |
| INTERACT_CAP | (1 << 5) |
| INTERACT_POLE | (1 << 6) |
| INTERACT_KOOPA | (1 << 7) |
| INTERACT_UNKNOWN_08 | (1 << 8) |
| INTERACT_BREAKABLE | (1 << 9) |
| INTERACT_STRONG_WIND | (1 << 10) |
| INTERACT_WARP_DOOR | (1 << 11) |
| INTERACT_STAR_OR_KEY | (1 << 12) |
| INTERACT_WARP | (1 << 13) |
| INTERACT_CANNON_BASE | (1 << 14) |
| INTERACT_BOUNCE_TOP | (1 << 15) |
| INTERACT_WATER_RING | (1 << 16) |
| INTERACT_BULLY | (1 << 17) |
| INTERACT_FLAME | (1 << 18) |
| INTERACT_KOOPA_SHELL | (1 << 19) |
| INTERACT_BOUNCE_TOP2 | (1 << 20) |
| INTERACT_MR_BLIZZARD | (1 << 21) |
| INTERACT_HIT_FROM_BELOW | (1 << 22) |
| INTERACT_TEXT | (1 << 23) |
| INTERACT_TORNADO | (1 << 24) |
| INTERACT_WHIRLPOOL | (1 << 25) |
| INTERACT_CLAM_OR_BUBBA | (1 << 26) |
| INTERACT_BBH_ENTRANCE | (1 << 27) |
| INTERACT_SNUFIT_BULLET | (1 << 28) |
| INTERACT_SHOCK | (1 << 29) |
| INTERACT_IGLOO_BARRIER | (1 << 30) |
| INTERACT_PLAYER | (1 << 31) |

<br />

## [mario_animation_ids.h](#mario_animation_ids.h)

### [enum MarioAnimID](#MarioAnimID)
| Identifier | Value |
| :--------- | :---- |
| MARIO_ANIM_SLOW_LEDGE_GRAB | 0 |
| MARIO_ANIM_FALL_OVER_BACKWARDS | 1 |
| MARIO_ANIM_BACKWARD_AIR_KB | 2 |
| MARIO_ANIM_DYING_ON_BACK | 3 |
| MARIO_ANIM_BACKFLIP | 4 |
| MARIO_ANIM_CLIMB_UP_POLE | 5 |
| MARIO_ANIM_GRAB_POLE_SHORT | 6 |
| MARIO_ANIM_GRAB_POLE_SWING_PART1 | 7 |
| MARIO_ANIM_GRAB_POLE_SWING_PART2 | 8 |
| MARIO_ANIM_HANDSTAND_IDLE | 9 |
| MARIO_ANIM_HANDSTAND_JUMP | 10 |
| MARIO_ANIM_START_HANDSTAND | 11 |
| MARIO_ANIM_RETURN_FROM_HANDSTAND | 12 |
| MARIO_ANIM_IDLE_ON_POLE | 13 |
| MARIO_ANIM_A_POSE | 14 |
| MARIO_ANIM_SKID_ON_GROUND | 15 |
| MARIO_ANIM_STOP_SKID | 16 |
| MARIO_ANIM_CROUCH_FROM_FAST_LONGJUMP | 17 |
| MARIO_ANIM_CROUCH_FROM_SLOW_LONGJUMP | 18 |
| MARIO_ANIM_FAST_LONGJUMP | 19 |
| MARIO_ANIM_SLOW_LONGJUMP | 20 |
| MARIO_ANIM_AIRBORNE_ON_STOMACH | 21 |
| MARIO_ANIM_WALK_WITH_LIGHT_OBJ | 22 |
| MARIO_ANIM_RUN_WITH_LIGHT_OBJ | 23 |
| MARIO_ANIM_SLOW_WALK_WITH_LIGHT_OBJ | 24 |
| MARIO_ANIM_SHIVERING_WARMING_HAND | 25 |
| MARIO_ANIM_SHIVERING_RETURN_TO_IDLE | 26 |
| MARIO_ANIM_SHIVERING | 27 |
| MARIO_ANIM_CLIMB_DOWN_LEDGE | 28 |
| MARIO_ANIM_CREDITS_WAVING | 29 |
| MARIO_ANIM_CREDITS_LOOK_UP | 30 |
| MARIO_ANIM_CREDITS_RETURN_FROM_LOOK_UP | 31 |
| MARIO_ANIM_CREDITS_RAISE_HAND | 32 |
| MARIO_ANIM_CREDITS_LOWER_HAND | 33 |
| MARIO_ANIM_CREDITS_TAKE_OFF_CAP | 34 |
| MARIO_ANIM_CREDITS_START_WALK_LOOK_UP | 35 |
| MARIO_ANIM_CREDITS_LOOK_BACK_THEN_RUN | 36 |
| MARIO_ANIM_FINAL_BOWSER_RAISE_HAND_SPIN | 37 |
| MARIO_ANIM_FINAL_BOWSER_WING_CAP_TAKE_OFF | 38 |
| MARIO_ANIM_CREDITS_PEACE_SIGN | 39 |
| MARIO_ANIM_STAND_UP_FROM_LAVA_BOOST | 40 |
| MARIO_ANIM_FIRE_LAVA_BURN | 41 |
| MARIO_ANIM_WING_CAP_FLY | 42 |
| MARIO_ANIM_HANG_ON_OWL | 43 |
| MARIO_ANIM_LAND_ON_STOMACH | 44 |
| MARIO_ANIM_AIR_FORWARD_KB | 45 |
| MARIO_ANIM_DYING_ON_STOMACH | 46 |
| MARIO_ANIM_SUFFOCATING | 47 |
| MARIO_ANIM_COUGHING | 48 |
| MARIO_ANIM_THROW_CATCH_KEY | 49 |
| MARIO_ANIM_DYING_FALL_OVER | 50 |
| MARIO_ANIM_IDLE_ON_LEDGE | 51 |
| MARIO_ANIM_FAST_LEDGE_GRAB | 52 |
| MARIO_ANIM_HANG_ON_CEILING | 53 |
| MARIO_ANIM_PUT_CAP_ON | 54 |
| MARIO_ANIM_TAKE_CAP_OFF_THEN_ON | 55 |
| MARIO_ANIM_QUICKLY_PUT_CAP_ON | 56 |
| MARIO_ANIM_HEAD_STUCK_IN_GROUND | 57 |
| MARIO_ANIM_GROUND_POUND_LANDING | 58 |
| MARIO_ANIM_TRIPLE_JUMP_GROUND_POUND | 59 |
| MARIO_ANIM_START_GROUND_POUND | 60 |
| MARIO_ANIM_GROUND_POUND | 61 |
| MARIO_ANIM_BOTTOM_STUCK_IN_GROUND | 62 |
| MARIO_ANIM_IDLE_WITH_LIGHT_OBJ | 63 |
| MARIO_ANIM_JUMP_LAND_WITH_LIGHT_OBJ | 64 |
| MARIO_ANIM_JUMP_WITH_LIGHT_OBJ | 65 |
| MARIO_ANIM_FALL_LAND_WITH_LIGHT_OBJ | 66 |
| MARIO_ANIM_FALL_WITH_LIGHT_OBJ | 67 |
| MARIO_ANIM_FALL_FROM_SLIDING_WITH_LIGHT_OBJ | 68 |
| MARIO_ANIM_SLIDING_ON_BOTTOM_WITH_LIGHT_OBJ | 69 |
| MARIO_ANIM_STAND_UP_FROM_SLIDING_WITH_LIGHT_OBJ | 70 |
| MARIO_ANIM_RIDING_SHELL | 71 |
| MARIO_ANIM_WALKING | 72 |
| MARIO_ANIM_FORWARD_FLIP | 73 |
| MARIO_ANIM_JUMP_RIDING_SHELL | 74 |
| MARIO_ANIM_LAND_FROM_DOUBLE_JUMP | 75 |
| MARIO_ANIM_DOUBLE_JUMP_FALL | 76 |
| MARIO_ANIM_SINGLE_JUMP | 77 |
| MARIO_ANIM_LAND_FROM_SINGLE_JUMP | 78 |
| MARIO_ANIM_AIR_KICK | 79 |
| MARIO_ANIM_DOUBLE_JUMP_RISE | 80 |
| MARIO_ANIM_START_FORWARD_SPINNING | 81 |
| MARIO_ANIM_THROW_LIGHT_OBJECT | 82 |
| MARIO_ANIM_FALL_FROM_SLIDE_KICK | 83 |
| MARIO_ANIM_BEND_KNESS_RIDING_SHELL | 84 |
| MARIO_ANIM_LEGS_STUCK_IN_GROUND | 85 |
| MARIO_ANIM_GENERAL_FALL | 86 |
| MARIO_ANIM_GENERAL_LAND | 87 |
| MARIO_ANIM_BEING_GRABBED | 88 |
| MARIO_ANIM_GRAB_HEAVY_OBJECT | 89 |
| MARIO_ANIM_SLOW_LAND_FROM_DIVE | 90 |
| MARIO_ANIM_FLY_FROM_CANNON | 91 |
| MARIO_ANIM_MOVE_ON_WIRE_NET_RIGHT | 92 |
| MARIO_ANIM_MOVE_ON_WIRE_NET_LEFT | 93 |
| MARIO_ANIM_MISSING_CAP | 94 |
| MARIO_ANIM_PULL_DOOR_WALK_IN | 95 |
| MARIO_ANIM_PUSH_DOOR_WALK_IN | 96 |
| MARIO_ANIM_UNLOCK_DOOR | 97 |
| MARIO_ANIM_START_REACH_POCKET | 98 |
| MARIO_ANIM_REACH_POCKET | 99 |
| MARIO_ANIM_STOP_REACH_POCKET | 100 |
| MARIO_ANIM_GROUND_THROW | 101 |
| MARIO_ANIM_GROUND_KICK | 102 |
| MARIO_ANIM_FIRST_PUNCH | 103 |
| MARIO_ANIM_SECOND_PUNCH | 104 |
| MARIO_ANIM_FIRST_PUNCH_FAST | 105 |
| MARIO_ANIM_SECOND_PUNCH_FAST | 106 |
| MARIO_ANIM_PICK_UP_LIGHT_OBJ | 107 |
| MARIO_ANIM_PUSHING | 108 |
| MARIO_ANIM_START_RIDING_SHELL | 109 |
| MARIO_ANIM_PLACE_LIGHT_OBJ | 110 |
| MARIO_ANIM_FORWARD_SPINNING | 111 |
| MARIO_ANIM_BACKWARD_SPINNING | 112 |
| MARIO_ANIM_BREAKDANCE | 113 |
| MARIO_ANIM_RUNNING | 114 |
| MARIO_ANIM_RUNNING_UNUSED | 115 |
| MARIO_ANIM_SOFT_BACK_KB | 116 |
| MARIO_ANIM_SOFT_FRONT_KB | 117 |
| MARIO_ANIM_DYING_IN_QUICKSAND | 118 |
| MARIO_ANIM_IDLE_IN_QUICKSAND | 119 |
| MARIO_ANIM_MOVE_IN_QUICKSAND | 120 |
| MARIO_ANIM_ELECTROCUTION | 121 |
| MARIO_ANIM_SHOCKED | 122 |
| MARIO_ANIM_BACKWARD_KB | 123 |
| MARIO_ANIM_FORWARD_KB | 124 |
| MARIO_ANIM_IDLE_HEAVY_OBJ | 125 |
| MARIO_ANIM_STAND_AGAINST_WALL | 126 |
| MARIO_ANIM_SIDESTEP_LEFT | 127 |
| MARIO_ANIM_SIDESTEP_RIGHT | 128 |
| MARIO_ANIM_START_SLEEP_IDLE | 129 |
| MARIO_ANIM_START_SLEEP_SCRATCH | 130 |
| MARIO_ANIM_START_SLEEP_YAWN | 131 |
| MARIO_ANIM_START_SLEEP_SITTING | 132 |
| MARIO_ANIM_SLEEP_IDLE | 133 |
| MARIO_ANIM_SLEEP_START_LYING | 134 |
| MARIO_ANIM_SLEEP_LYING | 135 |
| MARIO_ANIM_DIVE | 136 |
| MARIO_ANIM_SLIDE_DIVE | 137 |
| MARIO_ANIM_GROUND_BONK | 138 |
| MARIO_ANIM_STOP_SLIDE_LIGHT_OBJ | 139 |
| MARIO_ANIM_SLIDE_KICK | 140 |
| MARIO_ANIM_CROUCH_FROM_SLIDE_KICK | 141 |
| MARIO_ANIM_SLIDE_MOTIONLESS | 142 |
| MARIO_ANIM_STOP_SLIDE | 143 |
| MARIO_ANIM_FALL_FROM_SLIDE | 144 |
| MARIO_ANIM_SLIDE | 145 |
| MARIO_ANIM_TIPTOE | 146 |
| MARIO_ANIM_TWIRL_LAND | 147 |
| MARIO_ANIM_TWIRL | 148 |
| MARIO_ANIM_START_TWIRL | 149 |
| MARIO_ANIM_STOP_CROUCHING | 150 |
| MARIO_ANIM_START_CROUCHING | 151 |
| MARIO_ANIM_CROUCHING | 152 |
| MARIO_ANIM_CRAWLING | 153 |
| MARIO_ANIM_STOP_CRAWLING | 154 |
| MARIO_ANIM_START_CRAWLING | 155 |
| MARIO_ANIM_SUMMON_STAR | 156 |
| MARIO_ANIM_RETURN_STAR_APPROACH_DOOR | 157 |
| MARIO_ANIM_BACKWARDS_WATER_KB | 158 |
| MARIO_ANIM_SWIM_WITH_OBJ_PART1 | 159 |
| MARIO_ANIM_SWIM_WITH_OBJ_PART2 | 160 |
| MARIO_ANIM_FLUTTERKICK_WITH_OBJ | 161 |
| MARIO_ANIM_WATER_ACTION_END_WITH_OBJ | 162 |
| MARIO_ANIM_STOP_GRAB_OBJ_WATER | 163 |
| MARIO_ANIM_WATER_IDLE_WITH_OBJ | 164 |
| MARIO_ANIM_DROWNING_PART1 | 165 |
| MARIO_ANIM_DROWNING_PART2 | 166 |
| MARIO_ANIM_WATER_DYING | 167 |
| MARIO_ANIM_WATER_FORWARD_KB | 168 |
| MARIO_ANIM_FALL_FROM_WATER | 169 |
| MARIO_ANIM_SWIM_PART1 | 170 |
| MARIO_ANIM_SWIM_PART2 | 171 |
| MARIO_ANIM_FLUTTERKICK | 172 |
| MARIO_ANIM_WATER_ACTION_END | 173 |
| MARIO_ANIM_WATER_PICK_UP_OBJ | 174 |
| MARIO_ANIM_WATER_GRAB_OBJ_PART2 | 175 |
| MARIO_ANIM_WATER_GRAB_OBJ_PART1 | 176 |
| MARIO_ANIM_WATER_THROW_OBJ | 177 |
| MARIO_ANIM_WATER_IDLE | 178 |
| MARIO_ANIM_WATER_STAR_DANCE | 179 |
| MARIO_ANIM_RETURN_FROM_WATER_STAR_DANCE | 180 |
| MARIO_ANIM_GRAB_BOWSER | 181 |
| MARIO_ANIM_SWINGING_BOWSER | 182 |
| MARIO_ANIM_RELEASE_BOWSER | 183 |
| MARIO_ANIM_HOLDING_BOWSER | 184 |
| MARIO_ANIM_HEAVY_THROW | 185 |
| MARIO_ANIM_WALK_PANTING | 186 |
| MARIO_ANIM_WALK_WITH_HEAVY_OBJ | 187 |
| MARIO_ANIM_TURNING_PART1 | 188 |
| MARIO_ANIM_TURNING_PART2 | 189 |
| MARIO_ANIM_SLIDEFLIP_LAND | 190 |
| MARIO_ANIM_SLIDEFLIP | 191 |
| MARIO_ANIM_TRIPLE_JUMP_LAND | 192 |
| MARIO_ANIM_TRIPLE_JUMP | 193 |
| MARIO_ANIM_FIRST_PERSON | 194 |
| MARIO_ANIM_IDLE_HEAD_LEFT | 195 |
| MARIO_ANIM_IDLE_HEAD_RIGHT | 196 |
| MARIO_ANIM_IDLE_HEAD_CENTER | 197 |
| MARIO_ANIM_HANDSTAND_LEFT | 198 |
| MARIO_ANIM_HANDSTAND_RIGHT | 199 |
| MARIO_ANIM_WAKE_FROM_SLEEP | 200 |
| MARIO_ANIM_WAKE_FROM_LYING | 201 |
| MARIO_ANIM_START_TIPTOE | 202 |
| MARIO_ANIM_SLIDEJUMP | 203 |
| MARIO_ANIM_START_WALLKICK | 204 |
| MARIO_ANIM_STAR_DANCE | 205 |
| MARIO_ANIM_RETURN_FROM_STAR_DANCE | 206 |
| MARIO_ANIM_FORWARD_SPINNING_FLIP | 207 |
| MARIO_ANIM_TRIPLE_JUMP_FLY | 208 |

<br />

## [network_player.h](#network_player.h)
- MAX_RX_SEQ_IDS
- NETWORK_PLAYER_TIMEOUT
- UNKNOWN_GLOBAL_INDEX
- UNKNOWN_LOCAL_INDEX
- UNKNOWN_NETWORK_INDEX

### [enum NetworkPlayerType](#NetworkPlayerType)
| Identifier | Value |
| :--------- | :---- |
| NPT_UNKNOWN | 0 |
| NPT_LOCAL | 1 |
| NPT_SERVER | 2 |
| NPT_CLIENT | 3 |

<br />

## [os_cont.h](#os_cont.h)
- A_BUTTON
- B_BUTTON
- CONT_A
- CONT_ABSOLUTE
- CONT_ADDR_CRC_ER
- CONT_B
- CONT_C
- CONT_CARD_ON
- CONT_CARD_PULL
- CONT_COLLISION_ERROR
- CONT_D
- CONT_DOWN
- CONT_E
- CONT_EEP16K
- CONT_EEPROM
- CONT_EEPROM_BUSY
- CONT_F
- CONT_FRAME_ERROR
- CONT_G
- CONT_JOYPORT
- CONT_L
- CONT_LEFT
- CONT_NO_RESPONSE_ERROR
- CONT_OVERRUN_ERROR
- CONT_R
- CONT_RELATIVE
- CONT_RIGHT
- CONT_START
- CONT_TYPE_MASK
- CONT_TYPE_MOUSE
- CONT_TYPE_NORMAL
- CONT_TYPE_VOICE
- CONT_UP
- D_CBUTTONS
- D_JPAD
- L_CBUTTONS
- L_JPAD
- L_TRIG
- R_CBUTTONS
- R_JPAD
- R_TRIG
- START_BUTTON
- U_CBUTTONS
- U_JPAD
- Z_TRIG

<br />

## [sm64.h](#sm64.h)
- ACT_AIR_HIT_WALL
- ACT_AIR_THROW
- ACT_AIR_THROW_LAND
- ACT_BACKFLIP
- ACT_BACKFLIP_LAND
- ACT_BACKFLIP_LAND_STOP
- ACT_BACKWARD_AIR_KB
- ACT_BACKWARD_GROUND_KB
- ACT_BACKWARD_ROLLOUT
- ACT_BACKWARD_WATER_KB
- ACT_BBH_ENTER_JUMP
- ACT_BBH_ENTER_SPIN
- ACT_BEGIN_SLIDING
- ACT_BRAKING
- ACT_BRAKING_STOP
- ACT_BREASTSTROKE
- ACT_BUBBLED
- ACT_BURNING_FALL
- ACT_BURNING_GROUND
- ACT_BURNING_JUMP
- ACT_BUTT_SLIDE
- ACT_BUTT_SLIDE_AIR
- ACT_BUTT_SLIDE_STOP
- ACT_BUTT_STUCK_IN_GROUND
- ACT_CAUGHT_IN_WHIRLPOOL
- ACT_CLIMBING_POLE
- ACT_COUGHING
- ACT_CRAWLING
- ACT_CRAZY_BOX_BOUNCE
- ACT_CREDITS_CUTSCENE
- ACT_CROUCHING
- ACT_CROUCH_SLIDE
- ACT_DEATH_EXIT
- ACT_DEATH_EXIT_LAND
- ACT_DEATH_ON_BACK
- ACT_DEATH_ON_STOMACH
- ACT_DEBUG_FREE_MOVE
- ACT_DECELERATING
- ACT_DISAPPEARED
- ACT_DIVE
- ACT_DIVE_PICKING_UP
- ACT_DIVE_SLIDE
- ACT_DOUBLE_JUMP
- ACT_DOUBLE_JUMP_LAND
- ACT_DOUBLE_JUMP_LAND_STOP
- ACT_DROWNING
- ACT_EATEN_BY_BUBBA
- ACT_ELECTROCUTION
- ACT_EMERGE_FROM_PIPE
- ACT_END_PEACH_CUTSCENE
- ACT_END_WAVING_CUTSCENE
- ACT_ENTERING_STAR_DOOR
- ACT_EXIT_AIRBORNE
- ACT_EXIT_LAND_SAVE_DIALOG
- ACT_FALLING_DEATH_EXIT
- ACT_FALLING_EXIT_AIRBORNE
- ACT_FALL_AFTER_STAR_GRAB
- ACT_FEET_STUCK_IN_GROUND
- ACT_FINISH_TURNING_AROUND
- ACT_FIRST_PERSON
- ACT_FLAG_AIR
- ACT_FLAG_ALLOW_FIRST_PERSON
- ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION
- ACT_FLAG_ATTACKING
- ACT_FLAG_BUTT_OR_STOMACH_SLIDE
- ACT_FLAG_CONTROL_JUMP_HEIGHT
- ACT_FLAG_DIVING
- ACT_FLAG_HANGING
- ACT_FLAG_IDLE
- ACT_FLAG_INTANGIBLE
- ACT_FLAG_INVULNERABLE
- ACT_FLAG_METAL_WATER
- ACT_FLAG_MOVING
- ACT_FLAG_ON_POLE
- ACT_FLAG_PAUSE_EXIT
- ACT_FLAG_RIDING_SHELL
- ACT_FLAG_SHORT_HITBOX
- ACT_FLAG_STATIONARY
- ACT_FLAG_SWIMMING
- ACT_FLAG_SWIMMING_OR_FLYING
- ACT_FLAG_THROWING
- ACT_FLAG_WATER_OR_TEXT
- ACT_FLUTTER_KICK
- ACT_FLYING
- ACT_FLYING_TRIPLE_JUMP
- ACT_FORWARD_AIR_KB
- ACT_FORWARD_GROUND_KB
- ACT_FORWARD_ROLLOUT
- ACT_FORWARD_WATER_KB
- ACT_FREEFALL
- ACT_FREEFALL_LAND
- ACT_FREEFALL_LAND_STOP
- ACT_GETTING_BLOWN
- ACT_GRABBED
- ACT_GRAB_POLE_FAST
- ACT_GRAB_POLE_SLOW
- ACT_GROUND_BONK
- ACT_GROUND_POUND
- ACT_GROUND_POUND_LAND
- ACT_GROUP_AIRBORNE
- ACT_GROUP_AUTOMATIC
- ACT_GROUP_CUTSCENE
- ACT_GROUP_MASK
- ACT_GROUP_MOVING
- ACT_GROUP_OBJECT
- ACT_GROUP_STATIONARY
- ACT_GROUP_SUBMERGED
- ACT_HANGING
- ACT_HANG_MOVING
- ACT_HARD_BACKWARD_AIR_KB
- ACT_HARD_BACKWARD_GROUND_KB
- ACT_HARD_FORWARD_AIR_KB
- ACT_HARD_FORWARD_GROUND_KB
- ACT_HEAD_STUCK_IN_GROUND
- ACT_HEAVY_THROW
- ACT_HOLDING_BOWSER
- ACT_HOLDING_POLE
- ACT_HOLD_BEGIN_SLIDING
- ACT_HOLD_BREASTSTROKE
- ACT_HOLD_BUTT_SLIDE
- ACT_HOLD_BUTT_SLIDE_AIR
- ACT_HOLD_BUTT_SLIDE_STOP
- ACT_HOLD_DECELERATING
- ACT_HOLD_FLUTTER_KICK
- ACT_HOLD_FREEFALL
- ACT_HOLD_FREEFALL_LAND
- ACT_HOLD_FREEFALL_LAND_STOP
- ACT_HOLD_HEAVY_IDLE
- ACT_HOLD_HEAVY_WALKING
- ACT_HOLD_IDLE
- ACT_HOLD_JUMP
- ACT_HOLD_JUMP_LAND
- ACT_HOLD_JUMP_LAND_STOP
- ACT_HOLD_METAL_WATER_FALLING
- ACT_HOLD_METAL_WATER_FALL_LAND
- ACT_HOLD_METAL_WATER_JUMP
- ACT_HOLD_METAL_WATER_JUMP_LAND
- ACT_HOLD_METAL_WATER_STANDING
- ACT_HOLD_METAL_WATER_WALKING
- ACT_HOLD_PANTING_UNUSED
- ACT_HOLD_QUICKSAND_JUMP_LAND
- ACT_HOLD_STOMACH_SLIDE
- ACT_HOLD_SWIMMING_END
- ACT_HOLD_WALKING
- ACT_HOLD_WATER_ACTION_END
- ACT_HOLD_WATER_IDLE
- ACT_HOLD_WATER_JUMP
- ACT_IDLE
- ACT_ID_MASK
- ACT_INTRO_CUTSCENE
- ACT_IN_CANNON
- ACT_IN_QUICKSAND
- ACT_JUMBO_STAR_CUTSCENE
- ACT_JUMP
- ACT_JUMP_KICK
- ACT_JUMP_LAND
- ACT_JUMP_LAND_STOP
- ACT_LAVA_BOOST
- ACT_LAVA_BOOST_LAND
- ACT_LEDGE_CLIMB_DOWN
- ACT_LEDGE_CLIMB_FAST
- ACT_LEDGE_CLIMB_SLOW_1
- ACT_LEDGE_CLIMB_SLOW_2
- ACT_LEDGE_GRAB
- ACT_LONG_JUMP
- ACT_LONG_JUMP_LAND
- ACT_LONG_JUMP_LAND_STOP
- ACT_METAL_WATER_FALLING
- ACT_METAL_WATER_FALL_LAND
- ACT_METAL_WATER_JUMP
- ACT_METAL_WATER_JUMP_LAND
- ACT_METAL_WATER_STANDING
- ACT_METAL_WATER_WALKING
- ACT_MOVE_PUNCHING
- ACT_PANTING
- ACT_PICKING_UP
- ACT_PICKING_UP_BOWSER
- ACT_PLACING_DOWN
- ACT_PULLING_DOOR
- ACT_PUNCHING
- ACT_PUSHING_DOOR
- ACT_PUTTING_ON_CAP
- ACT_QUICKSAND_DEATH
- ACT_QUICKSAND_JUMP_LAND
- ACT_READING_AUTOMATIC_DIALOG
- ACT_READING_NPC_DIALOG
- ACT_READING_SIGN
- ACT_RELEASING_BOWSER
- ACT_RIDING_HOOT
- ACT_RIDING_SHELL_FALL
- ACT_RIDING_SHELL_GROUND
- ACT_RIDING_SHELL_JUMP
- ACT_SHIVERING
- ACT_SHOCKED
- ACT_SHOCKWAVE_BOUNCE
- ACT_SHOT_FROM_CANNON
- ACT_SIDE_FLIP
- ACT_SIDE_FLIP_LAND
- ACT_SIDE_FLIP_LAND_STOP
- ACT_SLEEPING
- ACT_SLIDE_KICK
- ACT_SLIDE_KICK_SLIDE
- ACT_SLIDE_KICK_SLIDE_STOP
- ACT_SOFT_BACKWARD_GROUND_KB
- ACT_SOFT_BONK
- ACT_SOFT_FORWARD_GROUND_KB
- ACT_SPAWN_NO_SPIN_AIRBORNE
- ACT_SPAWN_NO_SPIN_LANDING
- ACT_SPAWN_SPIN_AIRBORNE
- ACT_SPAWN_SPIN_LANDING
- ACT_SPECIAL_DEATH_EXIT
- ACT_SPECIAL_EXIT_AIRBORNE
- ACT_SPECIAL_TRIPLE_JUMP
- ACT_SQUISHED
- ACT_STANDING_AGAINST_WALL
- ACT_STANDING_DEATH
- ACT_START_CRAWLING
- ACT_START_CROUCHING
- ACT_START_HANGING
- ACT_START_SLEEPING
- ACT_STAR_DANCE_EXIT
- ACT_STAR_DANCE_NO_EXIT
- ACT_STAR_DANCE_WATER
- ACT_STEEP_JUMP
- ACT_STOMACH_SLIDE
- ACT_STOMACH_SLIDE_STOP
- ACT_STOP_CRAWLING
- ACT_STOP_CROUCHING
- ACT_SUFFOCATION
- ACT_SWIMMING_END
- ACT_TELEPORT_FADE_IN
- ACT_TELEPORT_FADE_OUT
- ACT_THROWING
- ACT_THROWN_BACKWARD
- ACT_THROWN_FORWARD
- ACT_TOP_OF_POLE
- ACT_TOP_OF_POLE_JUMP
- ACT_TOP_OF_POLE_TRANSITION
- ACT_TORNADO_TWIRLING
- ACT_TRIPLE_JUMP
- ACT_TRIPLE_JUMP_LAND
- ACT_TRIPLE_JUMP_LAND_STOP
- ACT_TURNING_AROUND
- ACT_TWIRLING
- ACT_TWIRL_LAND
- ACT_UNINITIALIZED
- ACT_UNKNOWN_0002020E
- ACT_UNLOCKING_KEY_DOOR
- ACT_UNLOCKING_STAR_DOOR
- ACT_UNUSED_DEATH_EXIT
- ACT_VERTICAL_WIND
- ACT_WAITING_FOR_DIALOG
- ACT_WAKING_UP
- ACT_WALKING
- ACT_WALL_KICK_AIR
- ACT_WARP_DOOR_SPAWN
- ACT_WATER_ACTION_END
- ACT_WATER_DEATH
- ACT_WATER_IDLE
- ACT_WATER_JUMP
- ACT_WATER_PLUNGE
- ACT_WATER_PUNCH
- ACT_WATER_SHELL_SWIMMING
- ACT_WATER_SHOCKED
- ACT_WATER_THROW
- AIR_STEP_CHECK_HANG
- AIR_STEP_CHECK_LEDGE_GRAB
- AIR_STEP_GRABBED_CEILING
- AIR_STEP_GRABBED_LEDGE
- AIR_STEP_HIT_LAVA_WALL
- AIR_STEP_HIT_WALL
- AIR_STEP_LANDED
- AIR_STEP_NONE
- C_BUTTONS
- END_DEMO
- GROUND_STEP_HIT_WALL
- GROUND_STEP_HIT_WALL_CONTINUE_QSTEPS
- GROUND_STEP_HIT_WALL_STOP_QSTEPS
- GROUND_STEP_LEFT_GROUND
- GROUND_STEP_NONE
- INPUT_ABOVE_SLIDE
- INPUT_A_DOWN
- INPUT_A_PRESSED
- INPUT_B_PRESSED
- INPUT_FIRST_PERSON
- INPUT_INTERACT_OBJ_GRABBABLE
- INPUT_IN_POISON_GAS
- INPUT_IN_WATER
- INPUT_NONZERO_ANALOG
- INPUT_OFF_FLOOR
- INPUT_SQUISHED
- INPUT_UNKNOWN_10
- INPUT_UNKNOWN_12
- INPUT_ZERO_MOVEMENT
- INPUT_Z_DOWN
- INPUT_Z_PRESSED
- LAYER_ALPHA
- LAYER_FORCE
- LAYER_OPAQUE
- LAYER_OPAQUE_DECAL
- LAYER_OPAQUE_INTER
- LAYER_TRANSPARENT
- LAYER_TRANSPARENT_DECAL
- LAYER_TRANSPARENT_INTER
- MARIO_ACTION_SOUND_PLAYED
- MARIO_CAPS
- MARIO_CAP_IN_HAND
- MARIO_CAP_ON_HEAD
- MARIO_KICKING
- MARIO_MARIO_SOUND_PLAYED
- MARIO_METAL_CAP
- MARIO_METAL_SHOCK
- MARIO_NORMAL_CAP
- MARIO_PUNCHING
- MARIO_SPECIAL_CAPS
- MARIO_TELEPORTING
- MARIO_TRIPPING
- MARIO_UNKNOWN_08
- MARIO_UNKNOWN_13
- MARIO_UNKNOWN_18
- MARIO_UNKNOWN_25
- MARIO_UNKNOWN_30
- MARIO_UNKNOWN_31
- MARIO_VANISH_CAP
- MARIO_WING_CAP
- MODEL_STATE_METAL
- MODEL_STATE_NOISE_ALPHA
- PARTICLE_19
- PARTICLE_2
- PARTICLE_BREATH
- PARTICLE_BUBBLE
- PARTICLE_DIRT
- PARTICLE_DUST
- PARTICLE_FIRE
- PARTICLE_HORIZONTAL_STAR
- PARTICLE_IDLE_WATER_WAVE
- PARTICLE_LEAF
- PARTICLE_MIST_CIRCLE
- PARTICLE_PLUNGE_BUBBLE
- PARTICLE_SHALLOW_WATER_SPLASH
- PARTICLE_SHALLOW_WATER_WAVE
- PARTICLE_SNOW
- PARTICLE_SPARKLES
- PARTICLE_TRIANGLE
- PARTICLE_VERTICAL_STAR
- PARTICLE_WATER_SPLASH
- PARTICLE_WAVE_TRAIL
- VALID_BUTTONS
- WATER_STEP_CANCELLED
- WATER_STEP_HIT_CEILING
- WATER_STEP_HIT_FLOOR
- WATER_STEP_HIT_WALL
- WATER_STEP_NONE

<br />

## [smlua_hooks.h](#smlua_hooks.h)

### [enum LuaHookedEventType](#LuaHookedEventType)
| Identifier | Value |
| :--------- | :---- |
| HOOK_UPDATE | 0 |
| HOOK_MARIO_UPDATE | 1 |
| HOOK_BEFORE_MARIO_UPDATE | 2 |
| HOOK_ON_SET_MARIO_ACTION | 3 |
| HOOK_BEFORE_PHYS_STEP | 4 |
| HOOK_ON_PVP_ATTACK | 5 |
| HOOK_ON_PLAYER_CONNECTED | 6 |
| HOOK_ON_PLAYER_DISCONNECTED | 7 |
| HOOK_ON_HUD_RENDER | 8 |
| HOOK_ON_INTERACT | 9 |
| HOOK_MAX | 10 |

<br />

## [types.h](#types.h)
- ANIM_FLAG_2
- ANIM_FLAG_5
- ANIM_FLAG_6
- ANIM_FLAG_7
- ANIM_FLAG_FORWARD
- ANIM_FLAG_HOR_TRANS
- ANIM_FLAG_NOLOOP
- ANIM_FLAG_VERT_TRANS
- MAX_PLAYERS
- PLAY_MODE_CHANGE_AREA
- PLAY_MODE_CHANGE_LEVEL
- PLAY_MODE_FRAME_ADVANCE
- PLAY_MODE_NORMAL
- PLAY_MODE_PAUSED

### [enum SpTaskState](#SpTaskState)
| Identifier | Value |
| :--------- | :---- |
| SPTASK_STATE_NOT_STARTED | 0 |
| SPTASK_STATE_RUNNING | 1 |
| SPTASK_STATE_INTERRUPTED | 2 |
| SPTASK_STATE_FINISHED | 3 |
| SPTASK_STATE_FINISHED_DP | 4 |

<br />

