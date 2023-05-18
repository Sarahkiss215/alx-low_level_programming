#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum values of integers
 * @max: maximum values
 *
 * Return: NULL if malloc fails,NULL if min>max
 * pointer to the newly allocated memory
 */
int *array_range(int min, int max)
{
	int n = 0;
	int size;
	int *arrint;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arrint = (int *)malloc(sizeof(int) * size);

	if (arrint == NULL)
	{
		return (NULL);
	}
	for (; n < size; n++)
	{
		arrint[n] = min++;
	}
	return (arrint);
}
