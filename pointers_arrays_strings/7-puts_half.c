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

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * puts_half - This function prints half of a string.
 * @s: Is the pointer to an string.
 *
 * Description: Prints the second half of a string, followed by a new line.
 * Return: None.
 */
void puts_half(char *s)
{
	int len, lon;

	lon = _strlen(s);
	if (lon % 2 == 0)
		len = _strlen(s) / 2;
	else
		len = (_strlen(s) - 1) / 2;
	s = s + len;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
