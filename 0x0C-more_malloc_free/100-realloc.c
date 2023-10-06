#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr:  previously allocated
 * @old_size: the allocated space for ptr
 * @new_size: size of the new memory block
 * Return: 0;
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *ptr2;

if (new_size == 0)
{
free(ptr);
return ('\0');
}

if (new_size == old_size)
return (ptr);

ptr2 = malloc(new_size);

if (ptr2 == NULL)
return ('\0');

for (i = 0; i < old_size; i++)
ptr2[i] = *((char *)ptr + i);

free(ptr);

return (ptr2);
}
