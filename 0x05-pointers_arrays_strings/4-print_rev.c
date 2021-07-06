#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *str)
{
	int k = 0;
	
	while (str[k] != '\0')
	{
		++k;
	}
	
	for (k--; k >= 0; k--)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
