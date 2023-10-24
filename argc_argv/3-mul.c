#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This program multiplies two numbers.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	if (argc >= 3 && atoi(argv[1]) != 0 &&  atoi(argv[2]) != 0)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
