#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 1;

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + i);
		i++;
	}
	else
		_putchar('\n');
}
