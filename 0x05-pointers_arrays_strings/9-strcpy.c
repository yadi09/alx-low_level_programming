#include "main.h"
/**
 * _strcpy - function name
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i, max = 0;
while (src[max] != '\0')
max++;
for (i = 0; i < max; i++)
{
while (src[i] != '\0')
{
dest[i] = src[i];
break;
}
}
return (dest);
}
