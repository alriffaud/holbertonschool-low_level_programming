#include <stdio.h>

/**
* main - Print a string.
*
* Description: This program prints exactly: and that piece of art is useful"
* - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* Return: 1
*/
int main(void)
{
	fprintf(stderr, "and that piece of art is useful\" - Dora ");
	fprintf(stderr, "Korpar, 2015-10-19\n");
	return (1);
}
