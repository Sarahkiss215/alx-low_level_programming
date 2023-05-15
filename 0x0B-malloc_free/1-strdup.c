#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointed to newly allocated space
 * @str: string to be used
 *
 * Return: NULL if str is NULL,NULL if insufficient memory
 * and a pointer to the duplicate str
 */
char *_strdup(char *str)
{
	int n = 0;
	int size = 0;
	char *newstr = str;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[n]; n++)
	{
		size++;
	}
	newstr = (char *)malloc(sizeof(char) * (size + 1));

	for (; str[n]; n++)
	{
		newstr[n] = str[n];
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}
