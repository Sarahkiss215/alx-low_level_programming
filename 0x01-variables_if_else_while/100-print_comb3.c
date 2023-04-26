#include <stdio.h>

/**
 * main - prints the combination of two numbers
 * followed by newline
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar ((a % 10) + '0');
			putchar ((b % 10) + '0');

			if (a != 1 && b != 0)
				continue;

			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
