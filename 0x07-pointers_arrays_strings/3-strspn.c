#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be treated
 * @accept: substring to s
 *
 * Return: number of bytes of initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if ((s == NULL) || (accept == NULL))
		return (i);
	while (*s && strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
