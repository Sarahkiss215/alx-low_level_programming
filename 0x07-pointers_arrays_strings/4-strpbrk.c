#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string with characters to match
 *
 * Return: pointer to character in s matching in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int n, m;
	char *scan = accept;

	while ((n = *s++) != 0)
	{
		for (; (m = *scan++) != '\0';)
		{
			if (m == n)
				return (scan + m);
		}
	}
	return (NULL);
}
