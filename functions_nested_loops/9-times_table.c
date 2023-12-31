#include "main.h"

/**
 * times_table- Prints the 9 times table.
 *
 * Description: This function prints the 9 times table, starting with 0.
 *
 * Return: None.
 */
void times_table(void)
{
	int col, fil, n;

	for (fil = 0; fil <= 9; fil++)
	{
		for (col = 0; col <= 9; col++)
		{
			n = fil * col;
			if (col == 0)
			{
				_putchar('0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		 _putchar('\n');

	}
}
