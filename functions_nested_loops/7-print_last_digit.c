#include "main.h"
/**
 * print_last_digit - last digit
 * @n: Is an integer number
 *
 * Description: This program will print the last digit of the number stored
 * in the variable n.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last_char, c;

	last_char = n % 10;
	c = last_char + 48;
	_putchar(c);
	return (last_char);

}
