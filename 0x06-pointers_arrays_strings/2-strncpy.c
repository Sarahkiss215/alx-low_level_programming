#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 *
 * Return: destination @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int letters;

	for (letters = 0; src[letters] != '\0' && letters < n; letters++)
		dest[letters] = src[letters];
	for (letters = 0; letters < n; letters++)
		dest[letters] = '\0';
	return (dest);
}
