#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a parameter
 * on each element of an array.
 * @array: Is a pointer to the array.
 * @size: Is the size of the array.
 * @action: Is a pointer to other function.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
