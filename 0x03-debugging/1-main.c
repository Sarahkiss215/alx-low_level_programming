#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	while (i < 10)
	
	{
		putchar (i);    /*The int i never never increments so will always print 0 and less than 10*/
	}
	
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
