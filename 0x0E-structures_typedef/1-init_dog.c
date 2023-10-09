#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct pointer parameter
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: 0;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
(*d).age = age;
d->owner = owner;
}

}
