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
	int fib1 = 1, fib2 = 2, contador = 2;

	printf("1 2 ");
	while (contador <= 50)
	{

		fib1 = fib2;
		fib2 = fib1 + fib2;
		printf("%d ", fib2);
		contador++;
	}
	return (0);
}
