#include "main.h"

// Motors
pros::Motor drive_left_1(1, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_left_2(2, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_left_3(3, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group drive_left({drive_left_1, drive_left_2, drive_left_3});

pros::Motor drive_right_1(4, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_right_2(5, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor drive_right_3(6, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group drive_right({drive_right_1, drive_right_2, drive_right_3});

// Intake
pros::Motor intake_1(7, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor intake_2(8, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group intake({intake_1, intake_2});

// Soleniold
pros::Motor soleniold(9, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_COUNTS);

// Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);