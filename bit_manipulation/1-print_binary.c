#include "main.h"

/**
 * print_binary - This function prints the binary representation of a number.
 * @n: It's an unsigned long integer number to convert and print.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
