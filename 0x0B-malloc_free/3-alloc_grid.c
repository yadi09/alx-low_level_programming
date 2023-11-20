#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * @width: width of array
 * @height: height of array
 * Return: 0
 **/

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width <= 0 || height <= 0)
	return ('\0');

arr = malloc(sizeof(int *) * height);
if (arr == NULL)
	return ('\0');

for (i = 0; i < height; i++)
{
*(arr + i) = malloc(sizeof(int) * width);
if (*(arr + i) == NULL)
{
for (j = 0; j < i; j++)
{
	free(*(arr + j));
	j++;
}
	free(arr);
	return ('\0');
}
}


for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
	arr[i][j] = 0;
	}
}

return (arr);
}
