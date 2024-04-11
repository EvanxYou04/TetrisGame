#include <raylib.h>
#include "game.h"
#define FPS 60

int main()
{
    Color darkGrey = {127, 127, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(FPS);

    Game game = Game();
    while (WindowShouldClose() == false)
    {
        game.KeyboardInput();
        BeginDrawing();
        ClearBackground(darkGrey);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}