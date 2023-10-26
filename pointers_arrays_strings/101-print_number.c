#include "main.h"

/**
 * print_number - This function prints an integer number.
 * @n: Is the integer number to print.
 *
 * Return: None.
 */
void print_number(int n)
{
	int num = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (num <= n)
	{
		num *= 10;
	}
	num /= 10;
	while (num > 0)
	{
		_putchar(n / num + '0');
		n = n % num;
		num /= 10;
	}
}
