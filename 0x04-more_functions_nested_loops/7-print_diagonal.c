#include "holberton.h"
/**
 *print_diagonal - print \ diagonaly
 *@n: int for number of times the character \ should be printed
 *Return: 0
 */
void print_diagonal(int n)
{
	int p;
	int lines = 1;

	while (lines <= n)

	{
		for (p = 0; p < lines; ++p)
		{
			for (p = 0; p < lines; p++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		lines++;
	}
	_putchar('\n');
}
