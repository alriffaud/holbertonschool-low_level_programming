#include "main.h"
/**
 * *rot13 - This function encodes a string using rot13.
 * @s: Is the pointer to the string.
 *
 * Return: s encoded.
 */
char *rot13(char *s)
{
	char *begin = s;

	while (*s != '\0')
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		{
			*s = *s + 13;
		}
		else if (*s >= 'n' && *s <= 'z')
		{
			*s = 'a' + (13 - ('z' - *s)) - 1;
		}
		else if (*s >= 'N' && *s <= 'Z')
		{
			*s = 'A' + (13 - ('Z' - *s)) - 1;
		}
		s++;
	}
	return (begin);
}
