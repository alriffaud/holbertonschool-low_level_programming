#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - This function returns the sum of a and b.
 * @a: It's the first integer number to sum.
 * @b: It's the second integer number to sum.
 *
 * Return: The sum of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference of a and b.
 * @a: It's the first integer number to calculate the difference.
 * @b: It's the second integer number to calculate the difference.
 *
 * Return: The difference of the two integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of a and b.
 * @a: It's the first integer number to calculate the product.
 * @b: It's the second integer number to calculate the product.
 *
 * Return: The product of the two integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the division of a by b.
 * @a: It's the first integer number to calculate the division.
 * @b: It's the second integer number to calculate the division.
 *
 * Return: The division of the two integers.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	exit(100);
}
/**
 * op_mod - This function returns the remainder of a by b.
 * @a: It's the first integer number to calculate the remainder.
 * @b: It's the second integer number to calculate the remainder.
 *
 * Return: The division of the two integers.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	exit(100);
}
