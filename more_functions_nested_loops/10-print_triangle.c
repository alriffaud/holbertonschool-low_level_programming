#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: This is the size of the triangle.
 *
 * This function prints a triangle, followed by a new line.
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
			for (j = 1; j <= size - i; j++)
				_putchar(' ');
			for (j =size - i + 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
