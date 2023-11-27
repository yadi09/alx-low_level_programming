#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that free the memory
 * @d: pointer to struct type
 * Return: void
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
