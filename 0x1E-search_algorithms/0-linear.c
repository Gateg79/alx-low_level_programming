#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * integers using the Linear search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 on failure.
 */

int linear_search(int *array, size_t size, int value)
{
	int b;

	if (array[b] == NULL)
		return (-1);

	for (b = 0; b < (int)size; b++)
	{
		printf("Value checked array[%u] = [%d]\n", b, array[b]);
		if (value == array[b])
			return (b);
	}
	return (-1);
}
