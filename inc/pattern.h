#ifndef PATTERN_H 
#define PATTHERN_H

#include "color.h"
#include "pwm.h"

// need to rework this so that Patterns are arrays of PattPieces I guess?
typedef struct Pattern {
    Color pattColor;
    Brightness pattBrightness;
    int pattTicks;
} Pattern;

Pattern createPattern();
Pattern * createPatternTransition(Pattern patt1, Pattern patt2, int transitionTicks); 
// returns pointer to array of patterns.
// transitionTicks = # of patterns in the array
#endif