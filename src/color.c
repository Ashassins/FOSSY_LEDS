#include "color.h"

color createColor (int rVal, int gVal, int bVal) { 
    sysColorCount++; // increment system's current # of custom colors, starts at 1 
    color newColor;

    newColor.id = sysColorCount; // set to Id
    newColor.r = rVal;
    newColor.g = gVal;
    newColor.b = bVal;
    return newColor;
}
