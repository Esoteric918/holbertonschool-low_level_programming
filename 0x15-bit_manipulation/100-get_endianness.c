#include "holberton.h"

/**
 * get_endianness - finds endian
 * test for git
 *Returns: int
 */
int get_endianness(void)
{
	int x = 10;

	x >>= 1;

	return (x & 1);
}
