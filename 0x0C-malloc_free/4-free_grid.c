#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free the ptr
 *@grid: ptr to grid freed
 *@height: int of grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; ++r)
		free(grid[r]);
}
