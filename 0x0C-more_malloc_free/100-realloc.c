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
else if (new_size == 0)
	return (NULL);
if (new_size == old_size)
	return (NULL);

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
while (i < old_size && (new_ptr + i) != NULL)
{
	new_ptr[i] = 0;
	i++;
}

i = 0;
while (*((char *)ptr + i) != '\0' && (new_ptr + i) != NULL)
{
	*(new_ptr + i) = *((char *)ptr + i);
	i++;
}
free(ptr);
return ((void *)new_ptr);
}
