#include<stdio.h>
/**
* main - prints all possible combinations of two digits.
*
* Description: Write a program that prints all possible combinations of two
* digits numbers.
*
* * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				putchar((char)i);
				putchar((char)j);
				if (i != 56 && j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
