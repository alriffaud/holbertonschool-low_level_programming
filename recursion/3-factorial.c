#include "main.h"
/**
 * factorial - This function returns the factorial of a given number.
 * @n: Is the integer number to calculate the factorial.
 *
 * Return: An integer representing the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
