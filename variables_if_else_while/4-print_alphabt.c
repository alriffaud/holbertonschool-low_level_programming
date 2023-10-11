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
	{
		if (i == 101 || i == 113)
			continue;
		putchar((char)i);
	}
	printf("\n");
	return (0);
}
