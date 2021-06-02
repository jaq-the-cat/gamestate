#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "states.h"

extern bool activeStates[];
extern GameState STATES[];

int main() {

    activeStates[MENU] = true;

    while (true) {
        for (int i=0; i<3; i++)
            if (activeStates[i]) {
                STATES[i].update();
                STATES[i].render();
            }
    }

    return EXIT_SUCCESS;
}
