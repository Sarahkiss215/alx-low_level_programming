#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, nums, val;

	val = n;
	for (val--, nums = 0; nums < n / 2; nums++, val--)
	{
		temp = a[nums];
		a[nums] = a[val];
		a[val] = temp;
	}
}
