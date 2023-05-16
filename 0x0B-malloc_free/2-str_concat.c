#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space
 * NULL if function fails
 */

char *str_concat(char *s1, char *s2)
{
	int n = 0;
	int size = 0;
	int m = 0;
	char *newstr;

	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	for (; s1[n] || s2[n]; n++)
	{
		size++;
	}
	newstr = (char *)malloc(sizeof(char) * size);

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (; s1[n]; n++)
	{
		newstr[m] = s1[n];
	}
	for (; s2[n]; n++)
	{
		newstr[m] = s2[n];
	}
	return (newstr);
}
