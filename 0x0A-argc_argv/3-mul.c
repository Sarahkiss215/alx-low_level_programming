#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of pointers of the arguments
 *
 * Return: products, 1 if argc < 3
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);

	result = n * m;

	printf("%d\n", result);

	return (0);
}
