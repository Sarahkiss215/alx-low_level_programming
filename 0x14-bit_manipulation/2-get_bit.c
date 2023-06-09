#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a bit to be rturned
 * @index: is the index of the bit starting at 0
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
