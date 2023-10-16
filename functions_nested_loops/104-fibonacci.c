#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Description: This program prints the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	double fib1 = 1, fib2 = 2, aux;
	unsigned long int fib2_part1, fib2_part2;
	int contador;

	printf("1, 2");
	for (contador = 2; contador < 98; contador++)
	{
		aux = fib1;
		fib1 = fib2;
		fib2 = aux + fib2;
		if (contador >= 38)
		{
			fib2_part1 = (unsigned long int)fib2 / 100000000;
			fib2_part2 = (unsigned long int)fib2 % 100000000;
			printf(", %lu%lu", fib2_part1, fib2_part2);
		}
		else
		{
			printf(", %.0f", fib2);
		}
	}
	printf("\n");
	return (0);
}
