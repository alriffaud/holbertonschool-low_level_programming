#include "main.h"

/**
 * print_diagonal - Draws a diagonal line.
 * @n: This is the number of times the character \ should be printed.
 *
 * This function draws a diagonal line on the terminal.
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	}
}
