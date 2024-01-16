#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: pointer to first element to be search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
