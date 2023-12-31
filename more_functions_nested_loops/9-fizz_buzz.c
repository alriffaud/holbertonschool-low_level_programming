#include "main.h"
#include <stdio.h>

/**
 * main - Main Function
 *
 * Return: Always 0.
 */
int main(void)
{
	Fizz_Buzz();
	return (0);
}

/**
 * Fizz_Buzz - Prints the result of the Fizz-Buzz test.
 *
 * This function prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Return: None.
 */
void Fizz_Buzz(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}
		else
			printf(" %d", i);

	}
	printf("\n");
}
