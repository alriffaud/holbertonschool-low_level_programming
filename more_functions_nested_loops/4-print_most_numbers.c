#include "main.h"
/**
* print_most_numbers - Prints most numbers, from 0 to 9.
*
* Description: This function prints the numbers, from 0 to 9 (excepting
* numbers 2 and 4)followed by a new line.
*
* * Return: 0
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar((char)i);
	}
	_putchar('\n');
}
