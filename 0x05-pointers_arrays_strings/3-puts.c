#include "holberton.h"
/**
 * _puts - prints out the string argument one char at a time
 * @str: pointer to a string array
 * Return: void
 */
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar (str[k]);
		++k;
	}
	_putchar('\n');
}
