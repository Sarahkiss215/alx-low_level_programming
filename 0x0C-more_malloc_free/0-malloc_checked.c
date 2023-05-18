#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: value to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
