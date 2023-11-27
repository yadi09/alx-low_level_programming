#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - function name
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;
int max = 0;

while (src[max] != '\0')
max++;

dest = malloc(sizeof(char) * max);
if (dest == NULL)
return ('\0');

for (i = 0; src[i] != '\0'; i++)
{
while (src[i] != '\0')
{
dest[i] = src[i];
break;
}
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
char *dup_name = NULL;
char *dup_owner = NULL;

_strcpy(dup_name, name);
_strcpy(dup_owner, owner);

new__dog = malloc(sizeof(dog_t));
if (new__dog == NULL)
	return (NULL);

new__dog->name = dup_name;
new__dog->age = age;
new__dog->owner = dup_owner;

return (new__dog);
}
