#include "main.h"
/**
 * _strncat - function
 * this program concatenates two strings.
 * @dest: parameter char
 * @src: parameter char
 * @n: parameter n
 * Return: 0;
 */
char *_strncat(char *dest, char *src, int n)
{
int dmax, dsrt = 0, i;
while (dest[dsrt] != '\0')
dsrt++;
dmax = sizeof(dest);
for (i = 0; i < dmax && src[i] != '\0' && i < n; i++)
{
dest[dsrt] = src[i];
dsrt++;
}
dest[dsrt] = '\0';
return (dest);
}
