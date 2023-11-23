#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: min of number
 * @max: max of number
 * Return: 0
**/

int *array_range(int min, int max)
{
int i = 0;
int *arr_rng;

if (min > max)
	return ('\0');

arr_rng = malloc(sizeof(int) * (max - min + 1));
if (arr_rng == NULL)
	return ('\0');

while (min <= max)
{
arr_rng[i] = min;
i++;
min++;
}

return (arr_rng);
}
