#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: Is the pointer to an string.
 *
 * Return: An integer representing the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
