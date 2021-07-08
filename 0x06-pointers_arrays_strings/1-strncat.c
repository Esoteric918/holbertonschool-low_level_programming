#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *@dest: dest of string
 *@src: src of string
 *@n: int in src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	for (k = 0; dest[k] != '\0'; ++k)
	{
	}
	for (j = 0 ; j < n && src[j] != '\0'; j++, k++)
		dest[k] = src[j];
	return (dest);
}
