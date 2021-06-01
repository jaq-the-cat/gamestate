typedef struct {
    void (*update)();
    void (*render)();
} GameState;

enum GameStates {
    MENU,
    PAUSE,
    GAME,
};
