#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: square matrix to be treated
 * @size: size of matrix a.
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int column = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (row < size)
	{
		sum1 += *(a + row * size + column);
		sum2 += *(a + row * size + (size - 1 - column));
		row++;
		column++;
	}
	printf("%d, %d\n", sum1, sum2);
}
