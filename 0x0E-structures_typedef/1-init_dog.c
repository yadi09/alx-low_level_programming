#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

}
