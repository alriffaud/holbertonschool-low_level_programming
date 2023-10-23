#include "main.h"

/**
 * divisor - This function returns the number divisor smaller than a specific
 * number.
 * @n: Is the integer number to check.
 * @x: Is the number to find out if is a divisor.
 *
 * Return: the number of divisors of n.
 */
int divisor(int x, int n)
{
	if (x < 2)
		return (0);
	if (x == 2 && n % 2 == 0)
		return (1);
	if (x == 2 && n % 2 != 0)
		return (0);
	if (x > 2 && n % x == 0)
		return (1 + divisor(x - 1, n));
	else
		return (0 + divisor(x - 1, n));
}

/**
 * is_prime_number - This function finds out if a number is a prime one.
 * @n: Is the integer number to check.
 *
 * Return: It returns 1 if the input integer is a prime number, otherwise
 * return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (divisor(n / 2, n) == 0)
		return (1);
	else
		return (0);
}
