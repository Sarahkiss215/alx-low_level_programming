#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: character to be initialized
 *
 * Return: NULL if size is 0,NULL if it fails to allocated memory
 * and a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	for (n = 0; n < size; n++)
	{
		arr[n] = c;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
