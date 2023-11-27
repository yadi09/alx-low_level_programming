#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that create new dog struct type
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	{
	return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

return (new_dog);
}

