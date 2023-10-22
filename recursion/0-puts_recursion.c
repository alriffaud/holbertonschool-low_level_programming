#include "main.h"
/**
 * _puts_recursion - This function prints a string.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string, followed by a new line, to stdout.
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
