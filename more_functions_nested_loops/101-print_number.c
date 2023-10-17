#include "main.h"

/**
* print_number - prints an integer.
* @n: Is the integer to print
*
* Description: This function prints an integer number.
*
* Return: None.
*/
void print_number(int n)
{
	if (n > 0 && n <= 9)
		_putchar(n + '0');
	else if (n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n <= 9999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(((n % 1000) % 100) % 10 + '0');
	}
}
