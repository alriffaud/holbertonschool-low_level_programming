#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: This is the number of times the character _ should be printed.
 *
 * This function draws a straight line in the terminal.
 *
 * Return: None.
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
