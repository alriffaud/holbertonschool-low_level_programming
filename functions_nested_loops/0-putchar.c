#include<stdio.h>
#include "main.h"

/**
* main - prints _putchar
*
* Description: This program prints _putchar, followed by a new line.
*
* Return: 0
*/

int main(void)
{
	print_putchar();
	return (0);
}

/**
* imprimir - prints _putchar
*
* Description: This program prints _putchar, followed by a new line.
*
* Return: Always 0.
*/
int print_putchar(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
