#ifndef UTILS_MISC_H
#define UTILS_MISC_H

#include <stdio.h>

float smoothstep(float edge0, float edge1, float x);
void update_all_mario_stars(void);
f32 clock_elapsed(void);
f64 clock_elapsed_f64(void);
u32 clock_elapsed_ticks(void);
void file_get_line(char* buffer, size_t maxLength, FILE* fp);

#endif