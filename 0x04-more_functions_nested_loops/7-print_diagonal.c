#include "holberton.h"
/**
 *print_diagonal - print \ diagonaly
 *@n: int for number of times the character \ should be printed
 *Return: 0
 */
void print_diagonal(int n)
{
	int p;
	int lines = 0;

	if (n > 0)
		while (lines <= n)
	{
		for (p = 0; p < lines; ++p)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		lines++;
	}
	else
	{
		_putchar('\n');
	}
}
