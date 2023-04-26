#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit_num;
	char alphabet;

	for (digit_num = 0; digit_num < 10; digit_num++)
		putchar ((digit_num % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar (alphabet);
	putchar ('\n');

	return (0);
}
