#include <stdlib.h>

/**
* *array_range - This function creates an array of integers.
* @min: Represent the first element of the array.
* @max: Represent the last element of the array.
*
* Return: the pointer to the newly created array. If min > max, return NULL.
* If malloc fails, return NULL.
*/
int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);
	res = malloc(sizeof(int) * (max - min + 1));
	if (res == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		res[i - min] = i;
	return (res);
}
