#include <stdlib.h>

/**
* *create_array - This function creates an array of chars, and initializes
* it with a specific char.
* @size: Represent the size of the array.
* @c: It's the specific character to initialite it.
*
* Return: NULL if size = 0, a pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	res = malloc(size);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		res[i] = c;
	res[size] = '\0';
	return (res);
}
