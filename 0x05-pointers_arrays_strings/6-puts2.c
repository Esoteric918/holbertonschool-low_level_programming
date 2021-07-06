#include "holberton.h"
/**
 *puts2 - print every other char
 *@str: is the string
 *Return: void
 */
void puts2(char *str)
{
	int k = 0;
	int i;

	while (str[k] != '\0')
	{
		++k;
	}
	for (i = 0; i < k ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
