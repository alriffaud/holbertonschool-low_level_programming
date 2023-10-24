#include <stdio.h>
#include "main.h"

/**
 * main - This program prints the number of arguments passed into it.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	(void) argv;
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
