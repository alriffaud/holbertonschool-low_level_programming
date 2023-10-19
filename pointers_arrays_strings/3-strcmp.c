#include "main.h"
/**
 * _strcmp - This function compares two strings.
 * @s1: Is the pointer to the first string.
 * @s2: Is the pointer to the second string.
 *
 * Return: 0 if the two strings are equal, -1 if s1 is lower than s2 and
 * 1 if s1 is grater than s2. It work exactly like strcmp.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	else if (*s1 != '\0' && *s2 == '\0')
		return (1);
	return (0);
}
