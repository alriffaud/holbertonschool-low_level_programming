#include <stdio.h>
#include "main.h"

/**
 * main - This program prints its name, followed by a new line.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
