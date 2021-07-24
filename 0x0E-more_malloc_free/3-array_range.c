#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - find range of string
 *@min: start of str
 *@max: end of str
 *
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; ++i)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);

}
