#include "holberton.h"

/**
 *_isupper - to check for uppercase
 *@c: int looking for _supper
 *Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
