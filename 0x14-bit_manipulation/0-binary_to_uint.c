#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number
 * 0 if b is NULL
 * 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int value;
	unsigned int product;

	if (b == NULL)
	{
		return (0);
	}
	value = 0;
	index = 0;
	product  = 1;
	while (b[index])
	{
		index++;
	}
	for (index = index - 1; index >= 0; index++)
	{
		if (b[index] != 48 && b[index] != 49)
		{
			return (0);
		}
		product *= 2;
		value += (b[index] - '0') * product;
	}
	return (value);
}
