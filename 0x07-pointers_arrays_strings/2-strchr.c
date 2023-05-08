#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character
 * @s: string to be treated
 * @c: character to be located
 *
 * Return: pointer to first occurrence of c and NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
