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
 * binary_search2 - searches for a value in a sorted array recursively
 * @array: pointer to array to be searched
 * @start: sub-array start point
 * @end: sub-array end point
 * @value: the value to be searched for
 *
 * Return: first index value found at or -1 if not present
 */

int binary_search2(int *array, int start, int end, int value)
{
	int n;

	if (start > end)
		return (-1);

	n = (start + end) / 2;

	int_array(&array[start], end - start + 1);

	if (array[n] == value)
	{
		if (array[n - 1] != value)
			return (n);
	}

	if (array[n] < value)
		return (binary_search2(array, n + 1, end, value));
	else
		return (binary_search2(array, start, n, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: first index value found at or -1 if not present or array is null
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (binary_search2(array, 0, size - 1, value));
}

