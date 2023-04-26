#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * followed by a newline
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar (alphabet);
		alphabet--;
	}
	putchar ('\n');

	return (0);
}

