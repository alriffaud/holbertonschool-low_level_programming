#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @c: This is the char variable that we want to check.
 *
 * This function that prints the sign of a number.
 *
 * Return: Returns 1 and prints + if n is greater than zero. Returns 0 and
 * prints 0 if n is zero. Returns -1 and prints - if n is less than zero.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
