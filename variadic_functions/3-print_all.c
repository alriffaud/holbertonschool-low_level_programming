#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - Prints an integer
 * @ap: Argument pointer
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
 * print_all - This function prints anything.
 * @format: Is a list of types of arguments passed to the function.
 *
 * Return: None.
 */
void print_all(const char * const format, ...)
{
	va_list vargs;
	unsigned int i = 0, j = 0;
	char *separator = "";
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};


	va_start(vargs, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(vargs);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(vargs);

	printf("\n");
}
