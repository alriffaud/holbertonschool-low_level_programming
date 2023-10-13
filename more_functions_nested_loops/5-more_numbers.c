#include "main.h"

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14.
*
* Description: This function that prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*
* * Return: None.
*/
void more_numbers(void)
{
	int n, fil;

	for (fil = 1 ; fil <= 10 ; fil++)
	{
		for (n = 0 ; n <= 9; n++)
			_putchar(n + '0');
		for (n = 10; n <= 14; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
