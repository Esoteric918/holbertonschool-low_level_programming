#include "holberton.h"
/**
 *print_square - use # to print square
 *@size: is the size of square
 *Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; ++j)
		{
			for (i = 0; i < size; ++i)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
