#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *@c: character to be treated
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
