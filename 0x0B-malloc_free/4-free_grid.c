#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees  a 2-d grid
 *
 * @grid: the address of the 2-d grid
 * @height: height of the grid
 *
 * Return: void
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
