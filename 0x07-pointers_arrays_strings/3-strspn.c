#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be treated
 * @accept: substring to s
 *
 * Return: number of bytes of initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = 0;
		while (*(accept + count) != '\0' && *(s + i) != *(accept + count))
			count++;
		if (*(accept + count) != '\0')
			return (i);
	}
	return (i);
}
