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