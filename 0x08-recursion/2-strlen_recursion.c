#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: string to be treated
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int length;
	int i = 1;

	length = 0;
	if (*s)
	{
		length++;
		length += _strlen_recursion(s + i);
	}
	return (length);
}
