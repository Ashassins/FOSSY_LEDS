#ifndef PATTERN_H 
#define PATTHERN_H

#include "color.h"
#include "pwm.h"

typedef struct Pattern {
    Color pattColor;
    Brightness pattBrightness;
    int pattTicks;
} Pattern;

Pattern * createPatternTransition(Pattern patt1, Pattern patt2, int transitionTicks); 
// returns pointer to array of patterns.
// transitionTicks = # of patterns in the array
#endif