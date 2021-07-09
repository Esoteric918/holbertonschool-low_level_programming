#include "holberton.h"
/**
 * _memset - fills the n bytes of memory
 *@s: pointer to the memory area to be filled
 *@b: the char to fill the memory
 *@n: the number of bytes to be filled
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
