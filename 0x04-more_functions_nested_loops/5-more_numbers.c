#include "holberton.h"
/**
 *more_numbers - 0 to 14 10x
 *
 *Return: 0
 */
void more_numbers(void)
{
	int p;
	int d;

	while (d < 10)
	{
		for (p = 0; p < 15; ++p)
		{
			if (p > 9)
			{
				_putchar('1');
			}
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
		++d;
	}
}
