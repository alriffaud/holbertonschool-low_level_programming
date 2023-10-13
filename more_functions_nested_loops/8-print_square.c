#include "main.h"

/**
 * print_square - Prints a square.
 * @size: This is the size of the square.
 *
 * This function draws a square, followed by a new line.
 *
 * Return: None.
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('*');
			_putchar('\n');
		}
	}
}
