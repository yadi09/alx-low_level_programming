#include "main.h"
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
while (src[i] != '\0')
{
dest[i] = src[i];
break;
}
}
dest[i] = '\0';
return (dest);
}
