#include <stdio.h>
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
	for (int i = 97; i <= 122; i++)
	{
		printf("%c", (char)i);
	}
	printf("\n");
	return (0);
}
