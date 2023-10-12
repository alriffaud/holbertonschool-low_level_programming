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
	int last_char;

	last_char = n % 10;
	return ((last_char * 10) + last_char);

}
