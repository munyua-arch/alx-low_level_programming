#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a][b]);
		}
		_putchar('\n');
	}
}
