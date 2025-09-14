#include <string.h>
#include <stdlib.h>
#include "raylib.h"
#include "chip8.h"

#define SCALE_FACTOR 20

int main(void)
{

    // Set up Raylib graphics

    InitWindow(PIXEL_WIDTH * SCALE_FACTOR, PIXEL_HEIGHT * SCALE_FACTOR, "Chip 8");

    // SetTargetFPS(60);

    // Initialize Chip8
    Chip8 *chip8 = init_chip8();

    if (!chip8)
    {
        CloseWindow();
        return 1;
    }

    // emultation loop
    while (!WindowShouldClose())
    {

        // emulate cycle

        // if draw flag is set, draw graphics
        BeginDrawing();
        ClearBackground(GRAY);
        EndDrawing();

        // store key press state
    }

    deinit_chip8(&chip8);
    CloseWindow();

    return 0;
}
