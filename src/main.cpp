#include <raylib.h>
#include "grid.h"
#define FPS 60

int main() 
{
    Color darkGrey = {127, 127, 127, 255};
    InitWindow(300,600, "raylib Tetris");
    SetTargetFPS(FPS);

    Grid grid = Grid();
    grid.grid[0][0]= 1;
    grid.grid[3][5]= 4;
    grid.grid[17][8]= 7;
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