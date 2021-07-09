#include "holberton.h"
/**
 * _strchr - locates a char in string
 *@s: pointer to the memory area to be filled
 *@c: the char to fill the memory
 *
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c) return (s);
		if (!*s) return (0);
        }
	return (0);
}
