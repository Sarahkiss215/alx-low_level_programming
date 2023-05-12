#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: pointer to array of pointers to arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
