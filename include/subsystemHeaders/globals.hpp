#include "display/lv_misc/lv_txt.h"
#include "pros/adi.hpp"
#include "pros/misc.h"
#include "pros/misc.hpp"
#include "pros/motors.hpp"
#include "pros/rotation.hpp"

// BUMPER SWITCH
extern pros::ADIDigitalIn bumper;

// ENCODERS
//extern pros::ADIEncoder encRight;
//extern pros::ADIEncoder encLeft;
extern pros::ADIEncoder encMiddle;

// ROTATION SENSORS
extern pros::Rotation encRight;
extern pros::Rotation encLeft;

// MOTORS
extern pros::Motor intake;
extern pros::Motor indexer;
extern pros::Motor shooter1;
extern pros::Motor shooter2;
extern pros::Motor catapult;

extern pros::Motor driveLeftBack;
extern pros::Motor driveLeftMiddle;
extern pros::Motor driveLeftFront;
extern pros::Motor driveRightBack;
extern pros::Motor driveRightMiddle;
extern pros::Motor driveRightFront;

// CONTROLLER
extern pros::Controller controller;

// PNEUMATICS
extern pros::ADIDigitalOut piston;