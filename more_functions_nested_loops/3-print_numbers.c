#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9.
*
* Description: This function prints the numbers, from 0 to 9, followed
* by a new line.
*
* Return: None.
*/
void print_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
		_putchar((char)i);

	_putchar('\n');
}
