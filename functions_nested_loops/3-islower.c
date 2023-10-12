#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is lowercase.
 *
 * Return: It returns 1 if c is lowercase and returns 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
