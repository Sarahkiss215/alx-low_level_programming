#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the int to be searched for
 *
 * Return: first index where value is located, or -1 if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int j = sqrt(size);
	int s = 0;
	int sect_end = 0;

	if (array == NULL || size == 0 || array[s] > value)
		return (-1);

	while (sect_end < (int)size)
	{
		if (array[sect_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", sect_end, array[sect_end]);

			s = sect_end;
			sect_end += j;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", s, sect_end);

	if (sect_end > (int)size - 1)
		sect_end = size - 1;

	while (s <= sect_end)
	{
		printf("Value checked array[%d] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return (s);
		s++;
	}

	return (-1);
}
