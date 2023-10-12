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
	int dif, i, j, n;

	dif = 0;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = j * dif;
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		 _putchar('\n');
		 dif++;

	}
}
