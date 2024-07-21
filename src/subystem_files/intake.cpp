#include "main.h"

int intakePower = 0;
bool intakeOn = false;
bool outtakeOn = false;

void Intake() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1))
        intakeOn = !intakeOn;
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2))
        outtakeOn = !outtakeOn;
    if (intakeOn) {
        intakePower = 127;
    }
    else {
        if (outtakeOn)
            intakePower = -127;
        else {
            intakePower = 0;
        }        
    }
    intake.move(intakePower);
}