#include <unistd.h>

/**
* main - Print a string.
*
* Description: This program prints exactly: and that piece of art is useful"
* - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
* Return: 1
*/
int main(void)
{
	const char message1[] = "and that piece of art is useful\" - Dora ";
	const char message2[] = "Korpar, 2015-10-19\n";

	write(2, message1, sizeof(message1) - 1);
	write(2, message2, sizeof(message2) - 1);
	return (1);
}
