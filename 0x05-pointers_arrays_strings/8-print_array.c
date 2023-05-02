#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * numbers separated by comma followed by space
 * @a: array to be printed
 * @n: number of element to be printed
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", *(a + m));
		if (m != (n - 1))
			printf(", ");
	}
	printf("\n");
}
