#include "main.h"
/**
 * *_strcat - This function concatenates two strings.
 * @src: Is the pointer to the origin string.
 * @dest: Is the pointer to return.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}
