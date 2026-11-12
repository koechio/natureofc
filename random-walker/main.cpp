#include "raylib.h"
int main(){
    const int screenWidth= 800;
    const int screenHeight = 400;

    InitWindow(screenWidth, screenHeight, "example window");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congratulations, your first window has been opened", 200, 200, 20, LIGHTGRAY);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}