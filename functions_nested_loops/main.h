#ifndef _PUTCHAR_H_
#define _PUTCHAR_H_

/**
* _putchar - prints _putchar
*
* Description: This program prints _putchar, followed by a new line.
*
* Return: no return
*/
void _putchar(void);

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
int _islower(char c);


#endif
