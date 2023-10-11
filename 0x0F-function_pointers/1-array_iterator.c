#include "function_pointers.h"

/**
 * array_iterator - executes each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to func
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;

for (i = 0; i < size; i++)
action(*(array + i));
}
