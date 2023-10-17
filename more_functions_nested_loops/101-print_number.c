#include "main.h"
#include <limits.h>

/**
 * countDigits - Counts the number of digits of an integer number.
 * @num: It is the integer whose number of digits is calculated.
 *
 * Return: Returns the variable count which is the number of digits.
 */
int countDigits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
 * potenciaEntera - This function calculates the integer power of an integer.
 * @numero: This is the base.
 * @potencia: This is the power.
 *
 * Return: Returns the variable res.
 */
int potenciaEntera(int numero, int potencia)
{
	int res = 1;

	if (potencia == 0)
		return (1);

	while (potencia > 0)
	{
		res *= numero;
		potencia--;
	}
	return (res);
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
	int digit, rest, num_dig;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == INT_MIN)
	{
		_putchar('-');
		rest = -1 * (INT_MIN + 1);
	}
	else if (n < 0)
	{
		_putchar('-');
		rest = -n;
	}
	else
		rest = n;
	num_dig = countDigits(rest);
	while (num_dig != 0)
	{
		digit = rest / potenciaEntera(10, num_dig - 1);
		rest =  rest % potenciaEntera(10, num_dig - 1);
		if (num_dig == 1 && n == INT_MIN)
		{
			digit = digit + 1;
			_putchar(digit + '0');
			return;
		}	
		_putchar(digit + '0');
		num_dig--;
	}
}
