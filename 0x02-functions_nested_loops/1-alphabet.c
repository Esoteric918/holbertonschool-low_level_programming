#include "holberton.h"
/**
 * print_alphabet - Use _putchar to show alphabet
 *
 * Return: nothing(void)
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
