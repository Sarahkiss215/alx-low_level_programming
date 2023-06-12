#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints to standard output
 * @filename: the name of the file
 * @letters: number of letters to be read and printed
 *
 * Return: 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 * actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t rd;
	ssize_t wr;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	str = (char *)malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, str, letters);
	wr = write(STDOUT_FILENO, str, rd);

	if (wr == -1 || op == -1 || rd == -1 || wr != rd)
	{
		free(str);
		return (0);
	}
	free(str);
	close(op);

	return (wr);
}
