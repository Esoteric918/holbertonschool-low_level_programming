#include "holberton.h"
/**
 * factorial - fuctionto return given num
 *@n: int
 *
 *Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
