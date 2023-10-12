#include "main.h"

/**
 * jack_bauer - Prints every minute.
 *
 * Description: This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: None.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10 && m < 10)
			{
				_putchar('0');
				_putchar((char)h);
				_putchar(':');
				_putchar('0');
				_putchar((char)m);
			}
		}

	}
}
