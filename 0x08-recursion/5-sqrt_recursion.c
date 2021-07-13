#include "holberton.h"

int square(int x, int n);

/**
 * _sqrt_recursion - function that returns sqrt fo int
 *@n: int val
 *
 *Return: -1
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}
/**
 * square - squares integers
 * @x: integer from _sqrt_recursion
 * @n: square root number from _sqrt_recursion
 *
 * Return: squared number
 */
int square(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (square(x + 1, n));
}
