#include <stdlib.h>
#include <string.h>

/**
* **alloc_grid - This function returns a pointer to a 2 dimensional array of
i* integers.
* @width: It represents the width of the 2 dimensional array.
* @height: It represents the height of the 2 dimensional array.
*
* Return: NULL on failure. If width or height is 0 or negative, return NULL.
*/
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	res = (int **) malloc(height * sizeof(int *));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		res[i] = malloc(width * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(res[j]);
			free(res);
			return (NULL);
		}
		memset(res[i], 0, width * sizeof(int));
	}
	return (res);
}
