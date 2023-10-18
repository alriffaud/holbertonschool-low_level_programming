#include "main.h"

/**
 * print_rev - This function prints a string in reverse order.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string in reverse order, followed by a new line,
 * to stdout.
 * Return: None.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
