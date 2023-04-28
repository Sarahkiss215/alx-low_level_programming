#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int hash, lwidth;


	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (lwidth = size - hash; lwidth > 0; lwidth--)
				_putchar(' ');
			for (lwidth = 0; lwidth < hash; lwidth++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
