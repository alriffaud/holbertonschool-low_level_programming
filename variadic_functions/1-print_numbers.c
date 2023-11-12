#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers, followed by a new line.
 * @separator: Is the string to be printed between numbers.
 * @n: Is the total number of parameters.
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vargs;
	unsigned int i, next;

	if (n > 0)
	{
		va_start(vargs, n);
		for (i = 0; i < n - 1; i++)
		{
			next = va_arg(vargs, int);
			printf("%d", next);
			if (separator != NULL)
				printf("%s", separator);
		}
		next = va_arg(vargs, int);
		printf("%d\n", next);
		va_end(vargs);
	}
}
