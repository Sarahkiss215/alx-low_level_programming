#include "main.h"

/**
 * flip_bits - returns the number of bits flipped
 * @n: first number
 * @m: second number
 *
 * Return: that returns the number of bits flipped from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exc = n ^ m;
	unsigned long int num = 0;

	while (exc > 0)
	{
		num += (exc & 1);
		exc >>= 1;
	}

	return (num);
}
