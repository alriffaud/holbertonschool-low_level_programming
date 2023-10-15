#include<stdio.h>
/**
* main - prints all possible combinations of three digits.
*
* Description: Write a program that prints all possible combinations of
* three digits numbers.
*
* * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i < j && j < k)
				{
					putchar((char)i);
					putchar((char)j);
					putchar((char)k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
