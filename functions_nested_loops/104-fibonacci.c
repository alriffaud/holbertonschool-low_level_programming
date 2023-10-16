#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description: This program prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, contador = 2, aux;

	printf("1, 2");
	while (contador < 98)
	{
		aux = fib1;
		fib1 = fib2;
		fib2 = aux + fib2;
		printf(", %lu", fib2);
		contador++;
	}
	printf("\n");
	return (0);
}
