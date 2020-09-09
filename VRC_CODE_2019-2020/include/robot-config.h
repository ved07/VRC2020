#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "v5.h"
#include "v5_vcs.h"
//
using namespace vex;
vex::brain Brain;
vex::motor RightMotor (vex::PORT6, vex::gearSetting::ratio18_1,true);
vex::motor RightMotor1 (vex::PORT12, vex::gearSetting::ratio18_1,true);
vex::motor IntakeMotor2 (vex::PORT7, vex::gearSetting::ratio18_1,false);
vex::motor LIFTMotor1 (vex::PORT21, vex::gearSetting::ratio36_1,false);
vex::motor IntakeMotor1 (vex::PORT13, vex::gearSetting::ratio18_1,true);
vex::motor LeftMotor1 (vex::PORT1, vex::gearSetting::ratio18_1,false);
vex::motor LeftMotor (vex::PORT10, vex::gearSetting::ratio18_1,false);
vex::motor LIFTMotor (vex::PORT4, vex::gearSetting::ratio18_1,true);
vex::controller Controller1;
vex::competition Competition;