#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; i < *s; i++)
	{
	if (s[i] == '\n')
		break;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
