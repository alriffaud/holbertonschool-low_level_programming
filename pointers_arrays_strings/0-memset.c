#include "main.h"

/**
 * *_memset - This function fills memory with a constant byte.
 * @s: The pointer to the memory area.
 * @b: A constant byte.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
