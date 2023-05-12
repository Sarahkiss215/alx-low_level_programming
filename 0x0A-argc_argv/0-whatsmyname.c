#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of a program
 * @argc: number of arguments in the command line
 * @argv: pointer to array of pointers to the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
