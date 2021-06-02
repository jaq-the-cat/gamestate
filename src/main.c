#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "states.h"

extern bool activeStates[];
extern GameState STATES[];

int main() {

    activeStates[MENU] = true;

    bool firstflag = false;
    while (true) {
        for (int i=0; i<3; i++)
            if (activeStates[i]) {
                STATES[i].render();
                if (!firstflag) {
                    STATES[i].update();
                    firstflag = true;
                }
            }
    }

    return EXIT_SUCCESS;
}
