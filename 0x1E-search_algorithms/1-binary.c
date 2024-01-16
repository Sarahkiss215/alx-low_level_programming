#include "search_algos.h"

/**
 * int_array - prints an integer array
 * @array: points to the first element of an array
 * @size: number of elements in array
 *
 * Return: nothing
 */

void int_array(int *array, int size)
{
	int index;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (index = 0; index < size; index++)
	{
		if (index == 0)
			printf("%d", array[index]);
		else
			printf(", %d", array[index]);
	}

	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: pointer to first element of the array to be searched
 * @size: number of elements in the array
 * @value: value to be searched
 *
 * Return: index position of value, or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int down = 0;
	int up = size - 1;
	int mid;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (down <= up)
	{
		mid = (down + up) / 2;

		int_array(&array[down], (up - down) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			up = mid - 1;

		else
			down = mid + 1;
	}

	return (-1);
}
