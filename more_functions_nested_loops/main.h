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

/**
 * mul - Multiplies two integers
 * @a: First integer to sum.
 * @b: Second integer to sum.
 *
 * Description: This function multiplies two integers.
 *
 * Return: None.
 */
int mul(int a, int b);

/**
* print_numbers - prints the numbers, from 0 to 9.
*
* Description: This function prints the numbers, from 0 to 9, followed
* by a new line.
*
* Return: None.
*/
void print_numbers(void);

/**
* print_most_numbers - Prints most numbers, from 0 to 9.
*
* Description: This function prints the numbers, from 0 to 9 (excepting
* numbers 2 and 4)followed by a new line.
*
* * Return: 0
*/
void print_most_numbers(void);

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14.
*
* Description: This function that prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*
* * Return: None.
*/
void more_numbers(void);

/**
 * print_line - Draws a straight line.
 * @n: This is the number of times the character _ should be printed.
 *
 * This function draws a straight line in the terminal.
 *
 * Return: None.
 */
void print_line(int n);

/**
 * print_diagonal - Draws a diagonal line.
 * @n: This is the number of times the character \ should be printed.
 *
 * This function draws a diagonal line on the terminal.
 *
 * Return: None.
 */
void print_diagonal(int n);

/**
 * print_square - Prints a square.
 * @size: This is the size of the square.
 *
 * This function draws a square, followed by a new line.
 *
 * Return: None.
 */
void print_square(int size);

/**
 * Fizz_Buzz - Prints the result of the Fizz-Buzz test.
 *
 * This function prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Return: None.
 */
void Fizz_Buzz(void);

/**
 * print_triangle - Prints a triangle.
 * @size: This is the size of the triangle.
 *
 * This function prints a triangle, followed by a new line.
 *
 * Return: None.
 */
void print_triangle(int size);

/**
* print_number - prints an integer.
* @n: Is the integer to print
*
* Description: This function prints an integer number.
*
* Return: None.
*/
void print_number(int n);


#endif
