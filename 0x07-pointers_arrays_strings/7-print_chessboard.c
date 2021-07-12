#include "holberton.h"
/**
 * print_chessboard - prints out a 8x8 board of chars
 * @a: str to search
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; ++row)
	{
		for (col = 1; col < 8; ++col)
			_putchar(a[row][col]);
		_putchar('\n');
	}
}
