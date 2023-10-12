#include "main.h"

/**
 * _abs - Absolute value of an integer.
 * @c: This is the char variable that we want to compute.
 *
 * computes the absolute value of an integer.
 *
 * Return: Returns the absolute value of the integer.
 */
int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
