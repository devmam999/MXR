#include "main.h"

bool solenioldOn = false;

void set_Soleniold() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
        solenioldOn = !solenioldOn;
        soleniold.set_value(solenioldOn);
    }
}