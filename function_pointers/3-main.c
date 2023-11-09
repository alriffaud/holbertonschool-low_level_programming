#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - This program performs simple operations.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		res = get_op_func(argv[2]);
		if (res != NULL)
		{
			if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
			{
				printf("Error\n");
				exit(100);
			}
			printf("%d\n", res(atoi(argv[1]), atoi(argv[3])));
			return (0);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	return (0);
}
