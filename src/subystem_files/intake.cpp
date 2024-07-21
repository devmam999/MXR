#include "main.h"

bool intakeOn = false;
bool outtakeOn = false;
int direction = 0;

void Intake() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) intakeOn = !intakeOn;

    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) outtakeOn = !outtakeOn;

    if (outtakeOn) direction = 1;
    
    else direction = -1;

    intake.move(127*intakeOn*direction);
}