#include "main.h"
#include <stdio.h>
/**
 * print_array - This function prints n elements of an array of integers.
 * @a: Is the pointer to a integer array.
 * @n: Is the number of elements we want to print.
 *
 * Description: prints n elements of an array of integers, followed by a
 * new line.
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (a != NULL && n > 0)
	{
		printf("%d", a[0]);
		while (a != NULL && i < n)
		{
			printf(",");
			printf(" ");
			printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
