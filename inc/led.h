#ifndef PATTERN_H 
#define PATTHERN_H

#include "color.h"
#include "pattern.h"
#include "pwm.h"
typedef struct LED {
    int id; // each panel has its own ID for usser personalization
    Color defaultColor; // panel's fallback color if pattern fails
    Pattern pattern; // brightness + color + pulsation sequence of a given LED, hence pattern
    bool enabled; // overriding on/off. disable a channel, etc.
} LED;

void setColor(LED led, Color value);
void setPattern(LED led, Pattern value);
void setIsEnabled(LED led, bool value);
#endif

