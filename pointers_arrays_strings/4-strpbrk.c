#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - This function searches a string for any of a set of bytes.
 * @s: Is the pointer to an string.
 * @accept: Is the pointer to an another string.
 *
 * Description: This function locates the first occurrence in the string s of
 * any of the bytes in the string accept.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	if (s == NULL || accept == NULL || *accept == '\0')
	{
		return (s);
	}
	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		if (accept[j] == '\0')
			return (NULL);
		s++;
	}
	return (s);

}
