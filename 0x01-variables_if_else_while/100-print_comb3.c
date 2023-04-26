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
		for (b = 1; b <= 9; b++)
			putchar (a);
			putchar (b);
			if (a != 1 && b != 0)
			{
				putchar (',');
				putchar (' ');
			}
	}
	putchar ('\n');

	return (0);
}
