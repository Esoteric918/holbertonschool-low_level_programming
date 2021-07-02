#include "holberton.h"
/**
 *print_most_numbers - print 0 to 9 and skip 2-4
 *
 *Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar (n + '0');
	}
	_putchar ('\n');
}
