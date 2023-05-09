#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: matrix of the chessboard
 *
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row <= 7; row++)
	{
		for (column = 0; column <= 7; column++)
		{
			_putchar(*((*a + row * 8) + column));
		}
		_putchar('\n');
	}
}
