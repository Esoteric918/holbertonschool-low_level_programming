#include "holberton.h"

/**
 * flip_bits - flip bit
 * @n: int to be flipped
 * @m: int to be flipped
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count = 0;

	x = n ^ m;

	while (x)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
