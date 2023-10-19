#include "main.h"
/**
 * _strcmp - This function compares two strings.
 * @s1: Is the pointer to the first string.
 * @s2: Is the pointer to the second string.
 *
 * Return: 0 if the two strings are equal, -15 if s1 is lower than s2 and
 * 15 if s1 is grater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && *s2 != '\0' && res == 0)
	{
		if (*s1 == *s2)
			res = 0;
		else if (*s1 < *s2)
		{
			res = -15;
			break;
		}
		else
		{
			res = 15;
			break;
		}

	}
	if (*s1 == '\0' && *s2 != '\0')
		res = -15;
	if (*s1 != '\0' && *s2 == '\0')
		res = 15;
	return (res);
}
