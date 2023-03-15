#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int **grid;
int i;
int j;
if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int *));

if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
