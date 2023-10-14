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

	const char message[] = "and that piece of art is useful\" - Dora Kor
		par, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);
	return (1);
}
