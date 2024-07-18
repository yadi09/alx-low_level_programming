#include "search_algos.h"

/**
 * recursive_search - .............
 * @array: ........
 * @size: .......
 * @value: ..........
 * Return: ............
 */

int search(int *arr, size_t size, int val)
{
size_t hf = size / 2;
size_t i;

if (arr == NULL || size == 0)
return (-1);

printf("Searching in array");

for (i = 0; i < size; i++)
{
if (i == 0) {
printf("%s %d", ":", arr[i]);
} else {
printf("%s %d", ",", arr[i]);
}
}      
printf("\n");

if (hf && size % 2 == 0)
{
hf--;
}

if (val == arr[hf])
return ((int)hf);

if (val < arr[hf])
return (search(arr, hf, val));

hf++;

return (search(arr + hf, size - hf, val) + hf);
}

/**
 * binary_search - .............
 * @array: ........
 * @size: ..........
 * @value: ..........
 * Return: .........
 */
int binary_search(int *array, size_t size, int val)
{
int idx;

idx = search(array, size, val);

if (idx >= 0 && array[idx] != val)
return (-1);

return (idx);
}
