#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: parameter
 * @size: parameter
 * Return: 0;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return ('\0');

ptr = malloc(nmemb * size);

if (ptr == NULL)
return ('\0');

for (i = 0; i < (nmemb * size); i++)
*(ptr + i) = 0;

return (ptr);
}
