#include "main.h"

/**
 * _isdigit - checks for a digit through 0 t0 9
 * @c: character to be tested
 *
 * Return: 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
