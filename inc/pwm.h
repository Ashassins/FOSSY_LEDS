#ifndef PWM_H 
#define PWM_H

#define MAXBRIGHT 100
#define SUPERBRIGHT 90
#define BRIGHT 75
#define MEDIUM 50
#define LOW 25
#define SUPERLOW 10
#define DARK 0 

int sysBrightness;

typedef struct Brightness {

} Brightness;

void incrementBrightness(); // + 1 brightness for custom settings
void setBrightness(int brightness);
void autoAdjustBrightness();
void transitionBrightness(); // gradually slide between two different brightness settings

#endif