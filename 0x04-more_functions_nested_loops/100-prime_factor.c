#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of number
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long remainder;

	while (remainder < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num = num / 2;
			continue;
		}
		for (remainder = 3; remainder < (num / 2); remainder += 2)
		{
			if ((num % remainder) == 0)
				num = num / remainder;
		}
	}
	printf("%ld\n", num);
	return (0);
}
