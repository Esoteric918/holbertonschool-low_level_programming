#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - find args from command line
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; argv[1][i]; ++i)
	{
		if (!isdigit(argv[1][i]))
			return (1);
	}
	sum = (atoi(argv[1]) / 25);
	cent = (atoi(argv[1]) % 25);
	sum += cent / 10;
	cent = cent % 10;
	sum += cent / 5;
	cent = cent % 5;
	sum += cent / 2;
	cent = cent % 2;
	sum += cent;

	printf("%d\n", sum);
	return (0);
}
