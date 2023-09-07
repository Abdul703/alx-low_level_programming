#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - create a 2 dimensional array of integers
 *
 * @width: the columns
 * @height: the rows
 *
 * Return: pointer to the 2-d array
*/
int **alloc_grid(int width, int height)
{

	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocating memory for each row */
		grid[i] = malloc(sizeof(int) * width);

		/* If allocation fails, free previously allocated memory */
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* initialize the values to 0*/
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
