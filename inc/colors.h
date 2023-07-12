#ifndef COLORS_H
#define COLORS_H
// #include <math.h>
// #include <stdint.h>

//// Baseline Color Definitions
// #define RED 
// #define ORANGE
// #define YELLOW
// #define GREEN
// #define BLUE
// #define INDIGO
// #define PURPLE
// #define PINK
// #define WHITE
// #define BROWN

typedef struct Color {
    int r;
    int g;
    int b;
} color;

void setColor (color value);
color createColor (int rVal, int gVal, int bVal);

#endif