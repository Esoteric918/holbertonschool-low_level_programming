#include "holberton.h"
/**
 * _islower - checks for lowercase
 * @c: the char to be checked
 * Return: nothing
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
