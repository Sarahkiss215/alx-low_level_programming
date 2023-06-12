#include "main.h"

/**
 * create_file -  creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure and -1 if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}
	/* S-IR read permission for owner, S_IWwrite permission for owner*/
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC,  S_IRUSR | S_IWUSR);
	length = 0;
	wr = write(op, text_content, length);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}
	if (op == -1 || wr == -1)
	{
		return (-1);/** if write fails **/
	}
	close(op);

	return (1);
}
