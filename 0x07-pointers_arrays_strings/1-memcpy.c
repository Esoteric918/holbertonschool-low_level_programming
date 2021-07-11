#include "holberton.h"
/**
 * _memcpy - fills the n bytes of memory
 *@dest: pointer to the memory area to be filled
 *@src: the char to fill the memory
 *@n: the number of bytes to be filled
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
