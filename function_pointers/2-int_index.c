#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - This function searches for an integer.
 * on each element of an array.
 * @array: Is a pointer to the array.
 * @size: Is the size of the array.
 * @cmp: Is a pointer to other function.
 *
 * Return: None.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
