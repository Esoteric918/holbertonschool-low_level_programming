#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - all natural numbers from n to 98
 * @n: the integer for be converted
 *
 *Return: result plus new line
 */
void print_to_98(int n)
{
	int d;

	if (n < 98)
	{
		for (d = n ; d < 98 ; ++d)
		{
			printf("%d, ", d);
		}
	}
	else
	{
		for (d = n ; d > 98 ; --d)
		{
			printf("%d, ", d);
		}
	}
	printf("\n");
}
