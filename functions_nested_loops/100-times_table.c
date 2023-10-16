#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: Is an integer and represent the times number of the table.
 * Description: This function prints the n times table, starting with 0.
 *
 * Return: None.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int col, fil, prod;

		for (fil = 0; fil <= n; fil++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = fil * col;
				if (col == 0)
				{
					_putchar('0');
				}
				 _putchar(',');
				if (prod >= 100)
					_putchar(' ');
				if (prod >= 10 && prod <= 99)
				{
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 100)
				{
					_putchar(prod / 100 + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar(prod % 100 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
			}
			_putchar('\n');

		}
	}
}
