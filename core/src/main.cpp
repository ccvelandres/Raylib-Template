#include "raylib.h"

int main(void)
{
    const int windowWidth = 800;
    const int windowHeight = 450;

    InitWindow(windowWidth, windowHeight, "Raylib-Template");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(WHITE);
            DrawText("Template Window", windowWidth / 2, windowHeight / 2, 20, LIGHTGRAY);
        }
        EndDrawing();
    }
    CloseWindow();

    return 0;
}