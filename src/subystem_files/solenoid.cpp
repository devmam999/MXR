#include "main.h"

bool solenoidOn = false;

void set_Solenoid() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        solenoidOn = !solenoidOn;
        solenoid.set_value(solenoidOn);
    }
}