#include "holberton.h"
#include <stdio.h>

/**
 * main - finds value in argv
 *@argc: counts the arguments
 *@argc: argument vectors
 *Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
