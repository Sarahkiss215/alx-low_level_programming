#include <stdio.h>

/**
 * main - prints combination of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar ((a % 10) + '0');
					putchar ((b % 10) + '0');
					putchar (32);  /*ASCII code for space*/
					putchar ((c % 10) + '0');
					putchar ((d % 10) + '0');

					if (a == 9 && b == 8 && c == 9 && d == 9)
						continue;
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
