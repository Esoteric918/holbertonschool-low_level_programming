#include "holberton.h"
#include <stdio.h>

/**
 * main - finds value in argv
 *@argc: counts the arguments
 *@argv: argument vectors
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
