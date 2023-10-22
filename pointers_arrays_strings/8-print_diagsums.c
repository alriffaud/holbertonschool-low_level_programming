#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: Is a pointer to an integer matrix.
 * @size: Is the size of the matrix.
 *
 * Return - None.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
