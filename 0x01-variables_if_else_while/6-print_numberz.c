#include <stdio.h>

/**
 * main - prints all digits of base 10 from 0
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit_num;

	for (digit_num = 0; digit_num < 10; digit_num++)
		putchar ((digit_num % 10) + '0');
	putchar ('\n');

	return (0);
}
