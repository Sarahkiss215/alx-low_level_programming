#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to function
 *
 * Return: index of the first element of function,
 * -1 if no element matches, -1 size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int length;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (length = 0; length < size; length++)
	{
		if (cmp(array[length]) != '\0')
		{
			return (length);
		}
	}
	return (-1);
}
