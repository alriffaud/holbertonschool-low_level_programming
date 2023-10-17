#include <stdio.h>
#include <math.h>
/**
 * primo - Determines if a number is a prime number or not.
 * @n: This is the integer number we want to check.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int primo(int n)
{
	int res = 0, m = 2;

	while (res = 0 && m * m < n)
	{
		if (n % m == 0)
			res = 1;
		m++;
	}
	return (res);
}

/**
 * main - Finds and prints the largest prime factor of the number
 * 612852475143.
 *
 * Description: This program finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	const int num = 612852475143;
	int i = (int)sqrt(num), aux = 0;

	while (i > 1 && aux = 0)
	{
		if (primo(i) == 1 && num % i == 0)
		{
			printf("%d\n", i);
			aux = 1;
		}
		i--;
	}
	printf("%d\n", i);
	return (0);
}
