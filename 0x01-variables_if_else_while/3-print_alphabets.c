#include <stdio.h>

/**
 * main - prints the alphabet in lower and upper cases
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar (alphabet);
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
		putchar (ALPHABET);
	putchar('\n');

	return (0);
}
