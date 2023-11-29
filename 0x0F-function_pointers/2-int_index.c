#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of int
 * @size: size of array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: int value
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int retrn_value;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size;  i++)
{
retrn_value = cmp(array[i]);
if (retrn_value != 0)
return (i);
}

return (-1);
}
