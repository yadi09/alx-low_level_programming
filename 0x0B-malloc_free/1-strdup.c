#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * @str: a given string
 * Return: 0
 **/

char *_strdup(char *str)
{
unsigned int i;
char *new_ptr;

if (str == NULL)
	return ('\0');

new_ptr = malloc(sizeof(str));
if (new_ptr == NULL)
	return ('\0');

i = 0;
while (i < sizeof(str))
{
	new_ptr[i] = str[i];
	i++;
}

return (new_ptr);
}
