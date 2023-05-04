#include "main.h"

/**
 * *cap_string - capitalizes every word of a string
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		switch (str[n])
		{
			case ' ': case '\n': case '\t': case ',': case ';':
			case '.': case '!': case '?': case '"': case '(':
			case ')': case '{': case '}':
				if (str[n + 1] >= 'a' && str[n + 1] <= 'z')
					str[n + 1] = (int)str[n + 1] - 32;
		}
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[n] = (int)str[n] - 32;
	return (str);
}
