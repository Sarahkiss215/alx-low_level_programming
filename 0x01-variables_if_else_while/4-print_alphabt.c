#include <stdio.h>

/**
 * main - prints all alphabet letters except q && e
 * followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar (alphabet);
	}

	putchar ('\n');

	return (0);
}

