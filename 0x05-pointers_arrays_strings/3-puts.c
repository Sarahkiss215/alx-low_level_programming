#include "main.h"

/**
 * _puts - prints a strint to stdout
 * followed by a new line
 *
 * @str: pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
