#include "3-calc.h"


/**
 * main - command line calculator
 * @argc: number of command line arguments
 * @argv: argument values
 * Return: operator (a b) value
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*fu)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fu = get_op_func(argv[2]);

	if (fu == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = fu(a, b);
	printf("%d\n", c);
	return (0);
}
