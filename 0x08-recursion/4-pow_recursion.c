#include "holberton.h"
/**
 * _pow_recursion - return val of x raised to power of y
 *@x: int to be raised
 *@y: the power of
 *
 *Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return(1);
	else if (y < 0)
		return(-1);
	else
		return (x * _pow_recursion(x, y - 1));

}
