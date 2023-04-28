#include <stdlib.h>

/**
 * main - prints Fizz, Buzz and FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			_putchar('FizzBuzz);
		else if (i % 5 == 0)
			_putchar('Buzz');
		else if (i % 3 == 0)
			_putchar('Fizz');
		else
			_putchar((i % 10) + '0');
		_putchar(' ');
	}
	_putchar('\n');
}
