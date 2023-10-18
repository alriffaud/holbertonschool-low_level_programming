#include "main.h"
/**
 * swap_char - This function swaps two characters.
 * @a: Is the first pointer to a character to swaps.
 * @b: Is the second pointer to a character to swaps.
 *
 * Return: None
 */
void swap_char(char *a, char *b)
{
	char aux = *a;

	*a = *b;
	*b = aux;
}

/**
 * _strlen - This function returns the length of a string.
 * @s: Is the pointer to an string.
 *
 * Return: An integer whith the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;
	char *c;

	c = s;
	while (*c != '\0')
	{
		c++;
		count++;
	}
	return (count);
}

/**
 * rev_string - This function returns the reverses of a string.
 * @s: Is the pointer to an string.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int count, mitad, i = 0;

	count = _strlen(s) - 1;
	mitad = count / 2;
	while (i <= mitad)
	{
		swap_char(s[i], s[count - i]);
		i++;
	}
}
