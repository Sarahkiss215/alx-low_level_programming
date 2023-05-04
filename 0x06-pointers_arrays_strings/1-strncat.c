#include "main.h"

/**
 * *_strncat - concatenates two strings with n bytes
 * @src: string source
 * @dest: string destination
 * @n: number of bytes from souurce
 *
 * Return: the string destination @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int string1 = 0;
	int string2 = 0;

	while (dest[string1] != '\0')
		string1++;
	for (string2 = 0; src[string2] != '\0' && string2 < n; string2++, string1++)
		dest[string1] = src[string2];
	return (dest);
}
