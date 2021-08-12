#include "holberton.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: ptr to binary string
 * Return: num of 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; ++i)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	for (i = 0; b[i] != '\0'; ++i)
	{
		num *= 2;
		if (b[i] == '1')
		{
			num += 1;
		}
	}
	return (num);
}
