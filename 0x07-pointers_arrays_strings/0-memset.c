#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer to starting address of memory with n bytes
 * @n: number of bytes to be filled starting from s to be filled
 * @b: value to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *begin = s;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}
	return (begin);
}
