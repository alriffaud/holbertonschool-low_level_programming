#include <stdlib.h>

/**
* *_calloc - This function allocates memory for an array using malloc.
* @nmemb: Represent the number of elements.
* @size: Represent the size bytes of each member.
*
* Return: A pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	return (res);
}
