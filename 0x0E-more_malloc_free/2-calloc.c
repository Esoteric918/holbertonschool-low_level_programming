#include "holberton.h"
#include <stdlib.h>

/**
 * calloc - call to mem from malloc
 *@nmemb: int  number of bytes
 *@size: size of bytes
 *
 *Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size + nmemb); ++i)
		ptr[i] = 0;
	return (ptr);
}
