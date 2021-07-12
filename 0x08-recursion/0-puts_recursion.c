#include "holberton.h"
/**
 * _puts_recursion - print string recursively
 *@s: string pointer
 *
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
