#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr: old string
 * @old_size: sizeof(ptr)
 * @new_size: modified size
 * Return: new allocated memory
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i = 0;

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (new_size == old_size)
	return (ptr);

if (ptr == NULL)
{
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	return (new_ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
	return (NULL);

i = 0;
while (i < old_size && i < new_size)
{
	*(new_ptr + i) = *((char *)ptr + i);
	i++;
}
free(ptr);
return (new_ptr);
}
