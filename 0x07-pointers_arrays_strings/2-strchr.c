#include "main.h"
#include <stdio.h>
/**
 * _strchr - function
 * @s: parameter
 * @c: parameter
 * Return: 0;
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *s != '\0'; i++)
{
if (*s == c)

return (s);

s++;
}

return (NULL);
}
