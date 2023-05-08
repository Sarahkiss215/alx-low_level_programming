#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: address after memory copying
 * @src: adress before memory copying
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *after = dest;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (after);
}
