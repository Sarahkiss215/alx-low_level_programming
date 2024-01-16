#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the start of the array
 * @size: number of elements in the array
 * @value: the value to be searched for
 *
 * Return: first index value is found at or -1 if not present or array is null
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index;
	int j = 0;
	int i = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (j <= i)
	{
		index = j + (((double)(i - j) / (array[i] - array[j]))
			     * (value - array[j]));

		if (index > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", index);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		else
		{
			if (array[index] > value)
				i = index - 1;
			else
				j = index + 1;
		}
	}

	return (-1);
}
