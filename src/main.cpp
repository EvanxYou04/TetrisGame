#include <raylib.h>
#include "grid.h"
#define FPS 60

int main() 
{
    Color darkGrey = {127, 127, 127, 255};
    InitWindow(300,600, "raylib Tetris");
    SetTargetFPS(FPS);
    Grid grid = Grid();
    grid.Print();
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkGrey);
        grid.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}