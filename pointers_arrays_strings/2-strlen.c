#include "main.h"
/**
 * _strlen - This function returns the length of a string.
 * @s: Is the pointer to an string.
 *
 * Return: An integer whith the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;
	char c = *s;

	while (c != '\0')
	{
		c = *(s + 1);
		count++;
	}
	return (count);
}
