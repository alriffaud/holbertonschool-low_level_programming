#include <stdlib.h>

/**
* free_grid - This function frees a 2 dimensional grid previously created by
* the alloc_grid function.
* @grid: It's the 2 dimensional grid.
* @height: It's the height of the grid.
*
* Return: None.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || *grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
