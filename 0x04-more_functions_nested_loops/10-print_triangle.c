#include "holberton.h"
/**
 *print_triangle - print triangle with #
 *@size: as a int*
 *Return: 0
*/
void print_triangle(int size)
{
	int i, lines = 1;

	if (size > 0)
	{
		while (size--)
		{
			for (i = 0; i < size; ++i)
			{
				_putchar(' ');
			}
			for (i = 0; i < lines; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			++lines;
		}
	}
	else
		_putchar('\n');
}
