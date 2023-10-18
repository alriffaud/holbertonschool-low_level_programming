#include "main.h"
/**
 * rev_string - This function returns the reverses of a string.
 * @s: Is the pointer to an string.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int count = 0;
	char *c;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;
	*(c + count) = '\0';
	count--;
	while (count >= 0)
	{
		*c = *s;
		s--;
		count--;
	}
	return (c);
}
