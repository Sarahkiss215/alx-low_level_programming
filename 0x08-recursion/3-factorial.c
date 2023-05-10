#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: number to be used
 *
 * Return: -1 if n<0, factorial otherwise
 */

int factorial(int n)
{
	int i = 1;
	int fact = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (1);
	}
	fact = fact * factorial(n - i);
	return (fact);
}
