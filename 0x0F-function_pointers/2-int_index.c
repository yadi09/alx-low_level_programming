#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: index of the first element
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (array == NULL || cmp == NULL)
return (0);

for (i = 0; i < size; i++)
if (cmp(*(array + i)))
return (i);

return (-1);
}
