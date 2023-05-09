#include "main.h"
#include <stddef.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to be treated
 * @needle: string to be searched in @haystack
 *
 * Return: pointer to start of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int n, m;
	int scan = 0;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		if (needle[m] == haystack[n])
		{
			scan = 1;
			m++;
		}
		else
		{
			scan = 0;
			m = 0;
		}
		if (needle[m] == '\0' && scan == 1)
			return (haystack + n - m + 1);
		else if (needle[m] == '\0' && scan == 0)
			return (haystack);
	}
	return (NULL);
}
