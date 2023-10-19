#include "main.h"
/**
 * *_strncpy - This function copies a string.
 * @src: Is the pointer to copy.
 * @dest: Is the pointer to return.
 * @n: Is the maximun number of bytes to use.
 *
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
