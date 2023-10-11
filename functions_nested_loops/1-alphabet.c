#include <stdio.h>
#include "main.h"
/**
* main - print all alphabet
*
* Description: Write a program that prints the alphabet in lowercase,
* followed by a new line.
*
* * Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}

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
		putchar((char)i);

	printf("\n");
}
