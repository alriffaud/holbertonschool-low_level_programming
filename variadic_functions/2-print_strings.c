#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This function prints numbers, followed by a new line.
 * @separator: Is the string to be printed between numbers.
 * @n: Is the total number of parameters.
 *
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vargs;
	unsigned int i; 
	char *next;

	if (n > 0)
	{
		va_start(vargs, n);
		for (i = 0; i < n - 1; i++)
		{
			next = va_arg(vargs, char*);
			if (next == NULL)
				printf("(nil)");
			else
				printf("%s", next);
			if (separator != NULL)
				printf("%s", separator);
		}
		next = va_arg(vargs, char*);
		if (next == NULL)
			printf("(nil)");
		else
			printf("%s", next);

		va_end(vargs);
	}
	printf("\n");
}
