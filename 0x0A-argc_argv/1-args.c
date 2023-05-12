#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: pointer to array of pointers to the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
