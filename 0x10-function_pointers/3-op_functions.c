#include "3-calc.h"
/**
 * op_add - sum of two ints
 *@a: int to be added
 *@b: int to be added
 *
 *Return: sum of a & b of NULL
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract args
 *@a: 1st argument
 *@b: 2nd argument
 *
 *Return: diff of a & b or NULL
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies agrs
 *@a: first arg
 *@b: second arg
 *Return: Mutlp of a & b or NULL
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of agrs
 *@a: first arg
 *@b: second arg
 *Return: division of a & b or NULL
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds the remainder of a / b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
