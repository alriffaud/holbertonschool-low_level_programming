#include<stdio.h>
/**
* main - Prints the lowercase alphabet in reverse order
*
* Description: Write a program that prints the lowercase alphabet in reverse,
* followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 122 ; i >= 97 ; i--)
		putchar((char)i);

	putchar('\n');
	return (0);
}
