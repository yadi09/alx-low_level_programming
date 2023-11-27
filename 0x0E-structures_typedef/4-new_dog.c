#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - function name
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';

return (dest);
}


/**
 * new_dog - function that create new dog struct type
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new__dog;
    int max_name = 0, max_owner = 0;
    char *dup_name, *dup_owner;

    while (name[max_name] != '\0')
    max_name++;
    while (owner[max_owner] != '\0')
    max_owner++;

    dup_name = malloc(sizeof(char) * (max_name + 1));
    if (dup_name == NULL)
    return ('\0');
    dup_owner = malloc(sizeof(char) * (max_owner + 1));
    if (dup_owner == NULL)
    {
        free(dup_name);
        return('\0');
    }
    
    new__dog = malloc(sizeof(dog_t));
    if (new__dog == NULL)
    return (NULL);

    new__dog->name = _strcpy(dup_name, name);
    new__dog->age = age;
    new__dog->owner = _strcpy(dup_owner, owner);

    return (new__dog);
}
