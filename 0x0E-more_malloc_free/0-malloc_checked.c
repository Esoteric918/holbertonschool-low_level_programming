#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - check proper use of malloc
 *@b int used to check
 *
 *Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (ptr);
	exit(98);
}
