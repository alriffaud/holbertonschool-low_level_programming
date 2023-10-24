#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_number - This function checks if an input is a number.
 * @s: Is the integer to check.
 *
 * Return: 1 if it is a number, 0 if not.
 */

int is_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - This program adds positive numbers.
 * @argc: Is the number of arguments passed to the program.
 * @argv: Is a one-dimensional array of strings.
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);

}
