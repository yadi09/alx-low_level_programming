#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: specific char.
 * Return: 0;
 **/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
	return ('\0');

str = malloc(sizeof(char) * size + 1);
if (str == NULL)
	return ('\0');

i = 0;
while (i < size)
{
str[i] = c;
i++;
}

str[i] = '\0';

return (str);
}
