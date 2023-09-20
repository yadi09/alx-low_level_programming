#include "main.h"
/**
 * _strncpy - function
 * this program copies a string.
 * @dest: parameter char
 * @src: parameter char
 * @n: parameter int
 * Return: 0;
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, smax = 0;
while (src[smax] != '\0')
smax++;
for (i = 0; i < n && i < smax; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return dest;
}
