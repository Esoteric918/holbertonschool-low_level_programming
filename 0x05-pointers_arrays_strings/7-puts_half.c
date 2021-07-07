#include "holberton.h"
/**
 *puts_half - print every other char
 *@str: is the string
 *Return: void
 */
void puts_half(char *str)
{
	int k = 0;
	int i;

	while (str[k] != '\0')
	{
		++k;
	}
	for (i = (k - 1) / 2 + 1; i < k ; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
