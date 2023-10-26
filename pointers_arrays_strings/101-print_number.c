#include "main.h"
#include <limits.h>

/**
 * print_number - This function prints an integer number.
 * @n: Is the integer number to print.
 *
 * Return: None.
 */
void print_number(int n)
{
	int num = 1, aux = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n = -(n + 1);
			aux = 1;
		}
		else
			n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == INT_MAX)
		num = 1000000000;
	else
	{
		while (num <= n)
		{
			num *= 10;
		}
		num /= 10;
	}
	while (num > 0)
	{
		if (n < 10 && aux == 1)
			_putchar(8 + '0');
		else
			_putchar(n / num + '0');
		n = n % num;
		num /= 10;
	}
}
