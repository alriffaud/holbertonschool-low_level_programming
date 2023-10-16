#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: This function prints all possible combinations of two
 * two-digit numbers. The numbers range from 0 to 99 and are separated by
 * a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int h = 0;
	int m = 1;
	int h_left, m_left;

	while (h <= 98)
	{
		while (m <= 99)
		{
			if (h < m)
			{
				m_left = m % 10;
				h_left = h % 10;
				putchar(h / 10 + '0');
				putchar(h_left + '0');
				putchar(' ');
				putchar(m / 10 + '0');
				putchar(m_left + '0');
				if (h != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		h++;
		m = 1;
	}
	putchar('\n');
	return (0);
}
