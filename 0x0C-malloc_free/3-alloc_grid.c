#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns ptr for 2D array
 *@width: width of grid
 *@height: of grid
 *
 *Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **ray, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ray = malloc(sizeof(int *) * height);
	if (ray == NULL)
	{
		return (ray);
	}
	for (r = 0; r < height; ++r)
	{
		ray[r] = malloc(sizeof(int) * width);
		if (ray[r] == NULL)
		{
			for (c = 0; c < r; ++c)
				free(ray[c]);
			free(ray);
			return (NULL);
		}
		for (c = 0; c < width; ++c)
			ray[r][c] = 0;
	}
	return (ray);
}
