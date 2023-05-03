#include "main.h"

/**
 * _atoi - converts a srting to an integer
 * @s: string to be converted
 *
 * Return: integer of the string
 */

int _atoi(char *s)
{
	int num;
	int minus;

	do {
		if (*s == '-')
			minus = -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (*s > 0)
			break;
	} while (*s++);
	return (num * minus);
}

