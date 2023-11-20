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
unsigned int max;

if (str == NULL)
	return ('\0');
max = 0;
while (str[max] != '\0')
	max++;

new_ptr = malloc(sizeof(char) * max + 1);
if (new_ptr == NULL)
	return ('\0');

i = 0;
while (i < max)
{
	new_ptr[i] = str[i];
	i++;
}
new_ptr[i] = '\0';

return (new_ptr);
}
