#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: It's a pointer to the first element of the array to search in.
 * @size: It's the number of elements in array.
 * @value: It's the number to search.
 *
 * Return: The first index where value is located or -1 if the value is not
 * present in array or if array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
