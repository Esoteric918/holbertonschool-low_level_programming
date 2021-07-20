#include "holberton.h"
#include <stdlib.h>


/**
 * create_array - make an array of chars
 *@size: the size of array to be made
 *@c: char that intializes array
 *
 *Return: ar pointer for malloc
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	if (ar == 0)
	{
		return (0);
	}

	for (i = 0; i < size; ++i)
		ar[i] = c;
	return (ar);
}
