#include "holberton.h"
/**
 * _abs - computes absolute value of an integer
 * @h: the number to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int h)
{
	if (h >= 0)
		return (h);
	else
		return (-h);
}
