#ifndef _PUTCHAR_H_
#define _PUTCHAR_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - Checks for uppercase character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is uppercase.
 *
 * Return: It returns 1 if c is uppercase and returns 0 otherwise.
 */
int _isupper(int c);

/**
 * _isdigit - Checks for a digit character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is a digit.
 *
 * Return: It returns 1 if c is digit and returns 0 otherwise.
 */
int _isdigit(int c);



#endif
