#include "main.h"
/**
 * _strcat - function
 * this function concatenates two strings.
 * @dest: parameter
 * @src: parameter
 * Return: always 0;
 */
char *_strcat(char *dest, char *src)
{
int i, smax = 0, dmax = 0;

while (dest[dmax] != '\0')
dmax++;
while (src[smax] != '\0')
smax++;

for (i = 0; i <= smax; i++)
{
if (src[i] != '\0')
{
dest[dmax] = src[i];
dmax++;
}
}
dest[dmax] = '\0';

return (dest);
}
