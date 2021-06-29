#include "holberton.h"
/**
*  _isalpha - use isalpha to check for alphabet
*@c: c is the character to check
*Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
