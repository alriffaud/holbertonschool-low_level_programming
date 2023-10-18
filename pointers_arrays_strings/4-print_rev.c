#include "main.h"
/**
 * _print_rev - This function prints a string in reverse order.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string in reverse order, followed by a new line,
 * to stdout.
 * Return: None.
 */
void _print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	s = s + count;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
