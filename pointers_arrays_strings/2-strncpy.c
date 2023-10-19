#include "main.h"
#include <stddef.h>
/**
 * *_strncpy - This function copies a string.
 * @src: Is the pointer to copy.
 * @dest: Is the pointer to return.
 * @n: Is the maximun number of bytes to use.
 *
 * Description: This function copies a string and work exactly like strncpy.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;
	int count = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	if (count < n)
		*dest = '\0';
	return (dest_start);
}
