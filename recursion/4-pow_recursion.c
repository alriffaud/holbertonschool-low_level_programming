#include "main.h"
/**
 * _pow_recursion - This function returns the value of x raised
 * to the power of y
 * @x: Is the base of the power.
 * @y: Is the exponent of the power.
 *
 * Return: An integer representing the result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
