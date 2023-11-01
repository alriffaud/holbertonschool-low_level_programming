#include <stdlib.h>

/**
* *malloc_checked - This function allocates memory using malloc.
* @b: Represent the size of memory to allocate.
*
* Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);
	if (res == NULL)
		exit(98);
	return (res);
}
