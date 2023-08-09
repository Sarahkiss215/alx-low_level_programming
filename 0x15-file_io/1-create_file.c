#include "main.h"

/**
 * create_file - A function which creates a file
 * @text_content: A NULL terminated string
 * @filename: name of file created
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op < 0)
	{
		return (-1);
	}
	while (text_content && *(text_content + length))
		length++;
	wr = write(op, text_content, length);
	close(op);
	if (wr < 0)
		return (-1);
	return (1);
}
