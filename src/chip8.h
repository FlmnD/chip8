
#ifndef CHIP8_H
#define CHIP8_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define PIXEL_WIDTH 64
#define PIXEL_HEIGHT 32

    typedef struct
    {
        unsigned short opcode;
        unsigned char memory[4096];

        // Stores CPU registers
        unsigned char V[16];

        unsigned short I;
        unsigned short pc;

        // Pixel state (1 or 0) of screen
        unsigned char gfx[PIXEL_WIDTH * PIXEL_HEIGHT];

        unsigned char delay_timer;
        unsigned char sound_timer;

        // Stack to remember current location
        unsigned short stack[16];
        unsigned short sp;

        // Key press code
        unsigned char key[16];
    } Chip8;

    Chip8 *init_chip8(void);
    bool load_game_chip8(void);
    void deinit_chip8(Chip8 **chip8);
    void emulate_cycle_chip8(Chip8 *chip8);

#ifdef __cplusplus
}
#endif

#endif