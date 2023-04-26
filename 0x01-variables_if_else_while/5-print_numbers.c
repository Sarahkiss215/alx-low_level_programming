#include <stdio.h>

/**
 * main - prints all single digits of base 10
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10, num++)
		printf("%d\n", num);

	return (0);
}
