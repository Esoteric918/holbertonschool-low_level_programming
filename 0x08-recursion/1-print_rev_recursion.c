#include "holberton.h"
/**
 * _print_rev_recursion - print  rev string recursively
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
