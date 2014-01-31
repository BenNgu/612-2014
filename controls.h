#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

//Buttons
const static uint8_t BUTTON_A    = 1;
const static uint8_t BUTTON_B    = 2;
const static uint8_t BUTTON_X    = 3;
const static uint8_t BUTTON_Y    = 4;
const static uint8_t BUTTON_LB   = 5;
const static uint8_t BUTTON_RB   = 6;
const static uint8_t BUTTON_BAK  = 7;
const static uint8_t BUTTON_SRT  = 8;
const static uint8_t BUTTON_LCLK = 9;
const static uint8_t BUTTON_RCLK = 10;
//Axes
const static uint8_t AXIS_L_X = 1;
const static uint8_t AXIS_L_Y = 2;
const static uint8_t TRIGGERS = 3;
const static uint8_t AXIS_R_X = 4;
const static uint8_t AXIS_R_Y = 5;
const static uint8_t DPAD_X   = 6;

//Shifting
const static uint8_t SHIFT_LOW  = BUTTON_LB;
const static uint8_t SHIFT_HIGH = BUTTON_RB;

//Driving
const static uint8_t LEFT_DRIVE  = AXIS_L_Y;
const static uint8_t RIGHT_DRIVE = AXIS_R_Y;

//isAxisZero Stuff -- Don't touch!
const static double TRIG_R = 1;
const static double TRIG_L = -1;
const static double TRIG_NONE = 0;

#endif
