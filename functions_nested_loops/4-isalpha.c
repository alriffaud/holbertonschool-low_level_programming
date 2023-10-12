#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is a letter, lowercase or uppercase.
 *
 * Return: It returns 1 if c is a letter, lowercase or uppercase and returns
 * 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
