#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - gives the minimum number of coins
 * @argc: number of arguments
 * @argv: pointer to array of pointer to arguments
 *
 * Return: 1 if argc<2, 0 if argc<0
 */

int main(int argc, char *argv[])
{
	int coin, cents;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	for (coin = 0; cents > 0; coin++)
	{
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents = cents - 1;
			continue;
		}
	}
	printf("%d\n", coin);
	return (0);
}
