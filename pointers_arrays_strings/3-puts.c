#include "main.h"
/**
 * _puts - This function prints a string.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string, followed by a new line, to stdout.
 * Return: None.
 */
void _puts(char *s)
{

	while (*s != '\0')
	{
		_putchar('*s');
		s++;
	}
	_putchar('\n');
}
