#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: EXIT_SUCCESS on success, otherwise exit with error number
 */
int main(int argc, char *argv[])
{
	char *srcfile;
	char *destfile;
	char str[READ_NBYTES];
	int op1, op2, rd, i = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	srcfile = argv[1];
	destfile = argv[2];
	op1 = open(srcfile, O_RDONLY);
	if (op1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			srcfile);
		exit(98);
	}
	op2 = open(destfile, O_CREAT | O_TRUNC | O_WRONLY, S_IWUSR);
	if (op2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destfile);
		exit(99);
	}
	while ((rd = read(op1, str, READ_NBYTES)))
		write(op2, str, rd);
	if (close(op2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		i = 1;
	}
	if (close(op1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		i = 1;
	}
	if (i)
		exit(100);
	return (0);
}
