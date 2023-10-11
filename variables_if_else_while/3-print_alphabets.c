#include<stdio.h>
/**
* main - print all alphabet in lowercase, and then in uppercase
*
* Description: Write a program that prints the alphabet in lowercase,
* and then in uppercase, followed by a new line.
*
* * Return: 0
*/
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
		putchar((char)i);
	for (i = 65 ; i <= 90 ; i++)
		putchar((char)i);

	printf("\n");
	return (0);
}
