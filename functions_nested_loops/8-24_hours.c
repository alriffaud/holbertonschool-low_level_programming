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
	int h = 0;
	int m = 0;
	int h_left, m_left;

	while (h <= 23)
	{
		while (m <= 59)
		{
			m_left = m % 10;
			h_left = h % 10;
			_putchar(h / 10 + '0');
			_putchar(h_left + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_left + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}
