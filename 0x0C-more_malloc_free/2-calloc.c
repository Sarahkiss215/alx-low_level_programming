#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: number of bytes to be allocated
 *
 * Return: pointer to the new allocation,
 * NULL if nmemb or size is 0,NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrmem;
	unsigned int n;
	unsigned int m;
	char *arrelem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = nmemb * size;
	arrmem = (void *)malloc(m);

	if (arrmem == NULL)
	{
		return (NULL);
	}
	arrelem = arrmem;
	for (n = 0; n < m; n++)
	{
		arrelem[n] = '\0';
	}
	return (arrmem);
}
