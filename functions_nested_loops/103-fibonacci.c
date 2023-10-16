#include <stdio.h>
/**
 * main - Prints the sum of the Fibonacci even-valued terms.
 *
 * Description: This program finds and prints the sum of the even-valued
 * terms, followed by a new line. The terms in the Fibonacci sequence not
 * exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, aux, sum = 0;

	printf("1, 2");
	while (fib2 < 4000000)
	{
		aux = fib1;
		fib1 = fib2;
		fib2 = aux + fib2;
		if (fib2 % 2 == 0)
			sum += fib2;
	}
	printf("%d\n", sum);
	return (0);
}
