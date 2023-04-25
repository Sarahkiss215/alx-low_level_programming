#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - n is a variable, prints("is positive" if the number is > 0)
 * prints("is zero" if the number == 0)
 * prints("is negative"if the number is negative)
 * followed by a new line
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is positive\n", n);
	}

	return (0);
}
