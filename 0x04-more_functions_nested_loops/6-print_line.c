#include "holberton.h"
/**
 *print_line - putchar to print line
 *@n: int to print line
 *
 *Return: 0
 */
void print_line(int n)
{
	int h;

	if (n > 0)
	{
		for (h = 0; h <= n; h++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
