#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to string to be concatenated
 * @src: string source
 *
 * Return: pointer to destination @dest
 */

char *_strcat(char *dest, char *src)
{
	int string1 = 0;
	int string2 = 0;

	while (*(dest + string1) != '\0')
		string1++;
	while (string2 >= 0)
	{
		*(dest + string1) = *(src + string2);
		if (*(src + string2) == '\0')
			break;
		string1++;
		string2++;
	}
	return (dest);
}
