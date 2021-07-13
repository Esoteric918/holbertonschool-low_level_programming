#include "holberton.h"
int ishelp(int n, int f);

/**
 * is_prime_number - checks is number prime
 *@n: int to be checked
 *
 *Return: 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n > 1 && n < 4)
		return (1);
	if (n == 1)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (ishelp(n, 3));
}
/**
 * ishelp - recursively tells if a num is prime
 * @n: the number to test
 * @f: next factor to check
 * Return: 1 if num is prime else 0
 */

int ishelp(int n, int f)
{

	if (f >= n)
		return (1);
	else if (n % f == 0)
		return (0);
	else
		return (ishelp(n, f + 2));
}
