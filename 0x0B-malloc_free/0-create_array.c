#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * @size: size of char
 * @c: character
 * Return: 0;
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
return ('\0');
else
{
char *ptr = (char *)malloc(sizeof(char) * size);
if (ptr == NULL)
return ('\0');
else
{
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
}
return ('\0');
}
