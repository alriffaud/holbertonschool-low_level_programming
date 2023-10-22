#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse order.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string in reverse order, followed by a new line,
 * to stdout.
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
