#include "main.h"
/**
 * _puts - This function .copies the string pointed to by src.
 * @src: Is the pointer to the origin string.
 * @dest: Is the pointer to return.
 *
 * Description: This function copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	dest = src;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	_putchar('\n');
	return (dest);
}
