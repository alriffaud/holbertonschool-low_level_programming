#include<stdio.h>
/**
* main - Prints all single digit numbers
*
* Description: Write a program that prints all single digit numbers of base
* 10 starting from 0, followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
		putchar((char)i);

	printf("\n");
	return (0);
}
