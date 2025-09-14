#include <stdio.h>
#include <stdlib.h>
#include "chip8.h"

Chip8 *init_chip8(void)
{
    Chip8 *chip8 = (Chip8 *)calloc(1, sizeof(Chip8));

    if (chip8 == NULL)
    {
        fprintf(stderr, "Failed to allocate chip 8 memory\n");
        return NULL;
    }

    chip8->pc = 0x200;
    // chip8->opcode = 0;
    // chip8->I = 0;
    // chip8->sp = 0;

    // memset(&(chip8->gfx), 0, (PIXEL_HEIGHT * PIXEL_WIDTH) * sizeof(chip8->gfx[0]));
    // memset(&(chip8->stack), 0, 16 * sizeof(chip8->stack[0]));
    // memset(&(chip8->V), 0, 16 * sizeof(chip8->V[0]));
    // memset(&(chip8->memory), 0, 4096 * sizeof(chip8->memory[0]));

    // load fontset
    // reset timers

    return chip8;
}

void deinit_chip8(Chip8 **chip8)
{
    if (chip8 && *chip8)
    {
        free(*chip8);
        *chip8 = NULL;
    }
}

void emulate_cycle_chip8(Chip8 *chip8)
{
    // Fetch Opcode
    // Decode Opcode
    // Execute Opcode

    // Update timers
}
