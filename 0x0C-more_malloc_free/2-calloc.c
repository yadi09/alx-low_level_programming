#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of each element
 * Return: pointer to new allocat memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
	return ('\0');

arr = malloc(nmemb * size);
if (arr == NULL)
	return ('\0');

while (i < (nmemb * size))
{
*(arr + i) = 0;
i++;
}

return ((void *)arr);
}

