#include "main.h"

/**
 * positive_or_negative - prints if a number is positive or negative
 *@i: integer to be tested
 *
 */
void positive_or_negative(int i)
{
	if (i > 0)
		_putchar((i % 10) + '0');
	else if (i == 0)
		_putchar((i % 10) + '0');
	else
		_putchar((i % 10) + '0');
	_putchar('\n');
}
