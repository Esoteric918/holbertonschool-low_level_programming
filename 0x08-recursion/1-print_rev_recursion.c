#include "holberton.h"
/**
 * _puts_recursion - print string recursively
 *@s: string pointer
 *
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		++s;
		_print_rev_recursion(s);
		--s;
		_putchar(*s);
	}
}
