#include "holberton.h"
/**
 *_strlen - function to return length of a string
 *@s: pointer to the string
 *Return: 0
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
		++k;
	return (k);
}
