#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times \ should be printed
 *
 */
void print_diagonal(int n)
{
	int bslash, space;

	if (n > 0)
	{
		for (bslash = 0; bslash < n; bslash++)
		{
			for (space = 0; space < bslash; space++)
				_putchar(' ');
			_putchar('\\');
			if (bslash == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
