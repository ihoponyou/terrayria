#include <iostream>
#include <raylib.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::cout << argv[i] << "\n";
        }
    }

    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib C++ Starter Kit Example");

    SetTargetFPS(60);

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    return 0;
}