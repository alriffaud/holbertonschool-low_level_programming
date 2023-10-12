#include "main.h"

/**
* print_alphabet - prints the alphabet
*
* Description: function that prints the alphabet, in lowercase, followed
* by a new line.
*
* Return: 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
		_putchar((char)i);

	_putchar('\n');
}
