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
	int contador;

	printf("1, 2");
	for (contador = 2; contador < 50; contador++)
	{
		aux = fib1;
		fib1 = fib2;
		fib2 = aux + fib2;
		printf(", %ld", (long int)fib2);
	}
	for (contador = 50; contador < 98; contador++)
	{
		aux = fib1;
		fib1 = fib2;
		fib2 = aux + fib2;
		printf(", %ld", (long int)(fib2 / 100000));
		printf("%ld", (long int)(fib2 % 100000));
	}
	printf("\n");
	return (0);
}
