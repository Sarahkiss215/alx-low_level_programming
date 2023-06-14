#include "main.h"
#include <sys/types.h>

/**
 * create_file -  creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure and -1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int op = 0;
	int wr = 0;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	/* S-IR read permission for owner, S_IWwrite permission for owner*/
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  S_IRUSR | S_IWUSR);
	wr = write(op, text_content, length);
	if (op == -1)
	{
		return (-1);
	}
	while (text_content && text_content[length])
	{
		length++;
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(op);

	return (1);
}
