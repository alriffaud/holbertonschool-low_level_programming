#include<stdio.h>
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
	int i;

	for (i = 97 ; i <= 122 ; i++)
		putchar((char)i);

	printf("\n");
	return (0);
}
