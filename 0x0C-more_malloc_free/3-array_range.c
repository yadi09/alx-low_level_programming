#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: 0;
 */

int *array_range(int min, int max)
{
int i, num = 0;
int *ptr;

if (min > max)
return ('\0');

while (min <= max)
{
num++;
min++;
}
min = min - num;

ptr = malloc(num *sizeof(int));

if (ptr == NULL)
return ('\0');

for (i = 0; i <= num; i++)
{
*(ptr + i) = min + i;
}

return (ptr);
}
