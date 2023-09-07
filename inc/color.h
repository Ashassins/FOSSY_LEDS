#ifndef COLOR_H
#define COLOR_H
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
int sysColorCount; // whats the max?
typedef struct Color {
    int id;
    int r;
    int g;
    int b;
} color;

color createColor (int rVal, int gVal, int bVal);

#endif