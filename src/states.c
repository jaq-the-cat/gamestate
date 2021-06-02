#include "states.h"
#include <stdbool.h>
#include <stdio.h>

static void menuUpdate() {
    printf("Update Menu\n");
}

static void menuRender() {
    printf("Render Menu\n");
}

static void pauseUpdate() {
    printf("Update Pause\n");
}

static void pauseRender() {
    printf("Render Pause\n");

}

static void gameUpdate() {
    printf("Update Game\n");
}

static void gameRender() {
    printf("Render Game\n");
}

bool activeStates[3] = {false, false, false};

const GameState STATES[] = {
    {menuUpdate, menuRender}, // Menu
    {pauseUpdate, pauseRender}, // Pause
    {gameUpdate, gameRender}, // Game
};
