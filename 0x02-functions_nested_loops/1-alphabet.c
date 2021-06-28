#include "holberton.h"
/**
 * main - Use _putchar to show alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
