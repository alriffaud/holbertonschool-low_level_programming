#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - print all alphabet 10 times
*
* Description: This program prints the alphabet in lowercase,
* followed by a new line 10 times.
*
* * Return: 0
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 1 ; j <= 10 ; j++)
	{
		for (i = 97 ; i <= 122 ; i++)
			putchar((char)i);
		printf("\n");
	}
}
