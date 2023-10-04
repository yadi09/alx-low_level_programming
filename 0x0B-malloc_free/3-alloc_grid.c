#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: parameter
 * @height: patameter
 * Return: 0;
 */

int **alloc_grid(int width, int height)
{
int i, j, **arr_2d;

if (width <= 0 || height <= 0)
return ('\0');

arr_2d = malloc(sizeof(int *) * height);

if (arr_2d == NULL)
return ('\0');

for (i = 0; i < height; i++)
arr_2d[i] = (int *)malloc(sizeof(int) * width);

for (i = 0; i < height; i++)
{
if (arr_2d[i] == NULL)
return ('\0');
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr_2d[i][j] = 0;
}

return (arr_2d);
}
