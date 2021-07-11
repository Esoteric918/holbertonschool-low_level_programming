#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - searches  string for any set of bytes
 *@s: pointer
 *@accept: string
 *
 * Return: char pointer s
 */
char *_strpbrk(char *s, char *accept)
{
	char *str = NULL;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		str = accept;
		while (*str != '\0')
		{
			if (*s == *str)
			{
				return (s);
			}
			str++;
		}
		s++;
	}
	return (NULL);
}
