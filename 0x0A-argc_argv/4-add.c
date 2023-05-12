#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to array of pointers to the arguments
 *
 * Return: 0 if no number, 1 if numbers contain non-digits
 */

int main(int argc, char *argv[])
{
	int n = 1;
	int m = 0;
	int result = 0;

	for (; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[n]);
	}
	printf("%d\n", result);
	return (0);
}
