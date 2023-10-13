#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is uppercase.
 *
 * Return: It returns 1 if c is uppercase and returns 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
