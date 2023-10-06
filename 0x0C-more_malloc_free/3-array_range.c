#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: 0;
 */

int *array_range(int min, int max)
{
int i, j, num = 0;
int *arr;

if (min > max)
return ('\0');

while (min <= max)
{
num++;
min++;
}
min = min - num;

arr = malloc(num * sizeof(int));

if (arr == NULL)
return ('\0');

for (j = 0, i = min; i <= max; i++, j++)
{
*(arr + j) = i;
}

return (arr);
}
