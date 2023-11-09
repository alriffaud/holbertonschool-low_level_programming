#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - This function selects the correct function to perform the
 * operation asked by the user.
 * @s: It's a pointer to operator passed as argument.
 *
 * Return: The result of the operation or NULL if s does not match any of
 * the 5 expected operators.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
