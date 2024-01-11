#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: It's a pointer to the first element of the array to search in.
 * @size: It's the number of elements in array.
 * @value: It's the number to search.
 *
 * Return: The first index where value is located or -1 if the value is not
 * present in array or if array is NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
