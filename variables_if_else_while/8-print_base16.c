#include<stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: This program that prints all the numbers of base 16
* in lowercase, followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
		putchar((char)i);
	for (i = 97 ; i <= 102 ; i++)
		putchar((char)i);

	putchar('\n');
	return (0);
}
