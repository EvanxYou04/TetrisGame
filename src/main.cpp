#include <raylib.h>
#define FPS 60
int main() 
{
    InitWindow(300,600, "raylib Tetris");
    SetTargetFPS(FPS);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}