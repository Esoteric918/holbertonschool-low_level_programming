#include "holberton.h"
#include <stdio.h>
/**
 * main - find the length of a string
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
