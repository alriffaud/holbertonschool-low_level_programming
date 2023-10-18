#include "main.h"
/**
 * print_array - This function prints a string.
 * @s: Is the pointer to an string.
 *
 * Description: Prints a string, followed by a new line, to stdout.
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (a != NULL && n > 0)
	{
		_putchar(a[0]);
		while (a != NULL && i < n)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(a[i]);
		}
	}
	_putchar('\n');
}
