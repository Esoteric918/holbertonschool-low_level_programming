#include "holberton.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 *@c: is digit 1 - 9
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
