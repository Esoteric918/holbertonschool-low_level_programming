#include "holberton.h"
/**
 * print_alphabet - Use _putchar to show alphabet
 *
 * Return: nothing(void)
 */
void print_alphabet_x10(void)
{
	char n;
	int q;

	for (n = 'a' ; n <= 'z' ; ++n)
	{
		_putchar (n);
	}
	for (q = '0' ; q <= 10 ; ++q)
		_putchar ('\n');
}
