#include "main.h"

/**
 * _isdigit - Checks for a digit character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is a digit.
 *
 * Return: It returns 1 if c is digit and returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
