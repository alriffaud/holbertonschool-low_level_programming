#include <stdio.h>

/**
 * print_buffer - This function prints a buffer.
 * @b: Pointer of the buffer.
 * @size: Is the size of the content.
 *
 * Return: None
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x%02x ", b[j], b[j + 1]);
			}
			else
			{
				printf("     ");
			}
		}

		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
				{
					printf("%c", b[j]);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
