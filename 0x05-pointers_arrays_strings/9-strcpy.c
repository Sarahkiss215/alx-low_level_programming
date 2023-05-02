#include "main.h"

/**
 * *_strcpy - copies string
 * include \0
 * @dest: the string is to be copied to
 * @src: pointer from which the string is to be copied
 *
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
