#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *@dest: string appended by src
 *@src: string appending dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != 0)
	{
		++j;
	}
	while (src[k] != 0)
	{
		dest[j] = src[k];
		++j;
		++k;
	}
	return (dest);
}
