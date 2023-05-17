#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of the program
 * @ac: number of the arguments
 * @av: pointer to array of pointers to the arguments
 *
 * Return: NULL if ac is 0 or av is NULL
 * pointer to the new string and NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int n = 0;
	int m = 0;
	int i = 0;
	int size = ac;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			size++;
		}
	}
	newstr = (char *)malloc(sizeof(char) * size + 1);

	if (newstr == NULL)
		return (NULL);
	for (; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			newstr[i++] = av[n][m];
			newstr[i++] = '\n';
		}
	}

	return (newstr);
}
