#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: First integer to print.
 *
 * Description: This function prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * Return: None.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		int i;
		for (i = 98; i < n; i++)
		{
			printf("%d, ", i);
		}	
		printf("%d", n);	
	}	
	else
        {
		int i;
		for (i = n; i < 98; i++)
                {
			printf("%d, ", i);
		}
		printf("98");
        }

}
