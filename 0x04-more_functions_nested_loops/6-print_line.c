#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbet of times _ should be printed
 *
 */
void print_line(int n)
{
	int dash;

	if (n > 0)
	{
		for (dash = 0; dash < n; dash++)
			_putchar('_');
	}
	else
		_putchar('\n');
}
