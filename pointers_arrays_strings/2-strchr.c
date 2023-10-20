#include "main.h"
#include <stddef.h>
/**
 * *_strchr - This function locates a character in a string.
 * @s: Is the pointer to an string.
 * @c: Is the character to locate.
 *
 * Description: This function returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found.
 *
 * Return: The pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);

}
