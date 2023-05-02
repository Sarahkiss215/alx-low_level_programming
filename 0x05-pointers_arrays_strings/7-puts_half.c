#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int digit, length, n;

	while (str[digit++])
		length++;
	if ((length % 2) == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	for (digit = n; digit < length; digit++)
		_putchar(str[digit]);
	_putchar('\n');
}
