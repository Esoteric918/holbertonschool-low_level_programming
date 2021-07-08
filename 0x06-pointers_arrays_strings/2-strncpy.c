#include "holberton.h"
/**
 * _strncpy -  copy sting to the n
 *@dest: dest of string
 *@src: src of string
 *@n: int in src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
