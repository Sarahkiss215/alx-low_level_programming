#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of int values
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
