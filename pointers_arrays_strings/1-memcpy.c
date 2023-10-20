#include "main.h"

/**
 * *_memcpy - This function copies memory area.
 * @dest: The returned pointer.
 * @src: The pointer to copy.
 * @n: The number of bytes to be filled.
 *
 * Return: The dest pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
