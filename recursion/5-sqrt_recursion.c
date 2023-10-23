#include "main.h"

/**
 * search -  This function find out if an integer as candidate for square root.
 * @square: This is the square of the integer we are looking for.
 * @x: This is the integer to check.
 *
 * Return: The square root of square. -1 if it doesn't exists.
 */

int search(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (search(square, x - 1));
	else if (x < square / x)
		return (search(square, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n: Is the number to calculate the square root.
 *
 * Return: An integer representing the result.
 */
int _sqrt_recursion(int n)
{
	int begin = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (search(n, begin));
}
