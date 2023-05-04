#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int letters = 0;

	for (letters = 0; s1[letters] != '\0' && s2[letters] != '\0'; letters++)
	{
		if (s1[letters] != s2[letters])
			return (s1[letters] - s2[letters]);
	}
	return (0);
}
