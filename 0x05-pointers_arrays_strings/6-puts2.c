#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string to be printed
 *
 * followed by a new line
 */

void puts2(char *str)
{
	int digit;
	int length;

	length = 0;

	while (str[length] != '\0')
		length++;
	for (digit = 0; digit < length; digit = digit + 2)
		_putchar(str[digit]);
	_putchar('\n');
}
