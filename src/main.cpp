#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"
#define FPS 60

int main()
{
    Color darkGrey = {127, 127, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(FPS);

    Grid grid = Grid();
    grid.Print();

    TBlock block = TBlock();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkGrey);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}