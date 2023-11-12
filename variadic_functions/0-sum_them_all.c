#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its parameters.
 * @n: Is the total number of parameters.
 *
 * Return: The sum of parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vargs;
	unsigned int i, next, sum = 0;

	if (n == 0)
		return (0);

	va_start(vargs, n);
	for (i = 0; i < n; i++)
	{
		next = va_arg(vargs, int);
		sum += next;
	}
	va_end(vargs);
	return (sum);
}
