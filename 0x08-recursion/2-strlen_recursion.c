#include "holberton.h"
/**
 * _strlen_recursion - return string len
 *@s: string pointer
 *
 *Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1) +_strlen_recursion(s + 1);
	else
		return (0);
}
