#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * followed by a new line
 *
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar((num % 10) + '0');
		if (num != 2 && num != 4)
			continue;
	}
	_putchar('\n');
}
