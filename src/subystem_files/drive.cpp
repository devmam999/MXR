#include "main.h"

void arcade_control() {
    int drive = controller.get_analog(ANALOG_RIGHT_X);
    int turn = controller.get_analog(ANALOG_LEFT_Y);
    if (abs(turn) < 5) {
        turn = 0;
    }
    if (abs(drive) < 5) {
        drive = 0;
    }
    int left = drive + turn;
    int right = drive - turn;
    drive_left.move(left);
    drive_right.move(right);
}

void tank_control() {
    int left = controller.get_analog(ANALOG_LEFT_Y);
    int right = controller.get_analog(ANALOG_RIGHT_Y);

    if (abs(left) < 5) {
        left = 0;
    }
    
    if (abs(right) < 5) {
        right = 0;
    }
    
    drive_left.move(left);
    drive_right.move(right);
}