#include "main.h"

/**
 * *string_toupper - changes all lowercases to uppercases
 * @str: string to be changed
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = (int)str[n] - 32;
	}
	return (str);
}
