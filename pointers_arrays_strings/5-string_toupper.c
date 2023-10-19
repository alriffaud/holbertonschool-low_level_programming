#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters of a
 * string to uppercase.
 * @s: Is the first pointer to a character to swaps.
 *
 * Return: None
 */
char *string_toupper(char *s)
{
	char *beggin;

	beggin = s;
	while (*s != '\0')
	{
		if (*s > 'a' && *s < 'z')
			*s = *s - 32;
		s++;
	}
	return (beggin);
}
