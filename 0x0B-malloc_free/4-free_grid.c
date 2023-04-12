#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for a 2D array of integers
 * @grid: 2d grid
 * @height: this is the  height dimension of grid
 * Description: this frees memory of grid
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}

