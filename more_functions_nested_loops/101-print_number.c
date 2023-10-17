#include "main.h"
#include <math.h>

/**
 * countDigits - Counts the number of digits of an integer number.
 * @num: It is the integer whose number of digits is calculated.
 *
 * Return: Returns the variable count which is the number of digits.
 */
int countDigits(int num)
{
	int count = 0;

	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
* print_number - prints an integer.
* @n: Is the integer to print
*
* Description: This function prints an integer number.
*
* Return: None.
*/
void print_number(int n)
{
	int digit, rest = n, num_dig;

	num_dig = countDigits(n);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (num_dig != 0)
	{
		digit = rest / (int)pow(10, num_dig);
		rest =  rest % (int)pow(10, num_dig);
		_putchar(digit + '0');
		num_dig--;
	}
}
