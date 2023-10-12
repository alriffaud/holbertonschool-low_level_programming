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
* imprimir - prints _putchar
*
* Description: This program prints _putchar, followed by a new line.
*
* Return: Always 0.
*/
int imprimir(void);

/**
* print_alphabet - prints the alphabet
*
* Description: function that prints the alphabet, in lowercase, followed
* by a new line.
*
* Return: 0
*/
void print_alphabet(void);

/**
* print_alphabet_x10 - print all alphabet 10 times
*
* Description: This program prints the alphabet in lowercase,
* followed by a new line 10 times.
*
* * Return: 0
*/
void print_alphabet_x10(void);

/**
 * _islower - Checks for lowercase character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is lowercase.
 *
 * Return: It returns 1 if c is lowercase and returns 0 otherwise.
 */
int _islower(int c);

/**
 * _isalpha - Checks for alphabetic character.
 * @c: This is the char variable that we want to check.
 *
 * This function checks if a character is a letter, lowercase or uppercase.
 *
 * Return: It returns 1 if c is a letter, lowercase or uppercase and returns
 * 0 otherwise.
 */
int _isalpha(int c);

/**
 * print_sign - Prints the sign of a number.
 * @c: This is the char variable that we want to check.
 *
 * This function that prints the sign of a number.
 *
 * Return: Returns 1 and prints + if n is greater than zero. Returns 0 and
 * prints 0 if n is zero. Returns -1 and prints - if n is less than zero.
 */
int print_sign(int c);

/**
 * _abs - Absolute value of an integer.
 * @c: This is the char variable that we want to compute.
 *
 * computes the absolute value of an integer.
 *
 * Return: Returns the absolute value of the integer.
 */
int _abs(int c);


#endif
