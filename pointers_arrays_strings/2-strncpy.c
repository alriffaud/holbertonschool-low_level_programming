#include "main.h"
/**
 * *_strncpy - This function concatenates two strings.
 * @src: Is the pointer to the origin string.
 * @dest: Is the pointer to return.
 * @n: Is the maximun number of bytes to use.
 *
 * Description: This function appends the src string to the dest string,
 * it will use at most n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest, count = 0;

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
