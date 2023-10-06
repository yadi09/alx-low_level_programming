#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: 0;
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int max = 0, max2 = 0;
char *ptr;

if (s1 == NULL && s2 == NULL)
return ('\0');

while (s1[max] != '\0')
max++;

while (s2[max2] != '\0')
max2++;

if (max2 >= n)
ptr = malloc(sizeof(char) * (max + n + 1));
else
ptr = malloc(sizeof(char) * (max + max2 + 1));

if (ptr == NULL)
return ('\0');

for (i = 0; i < max; i++)
ptr[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++, i++)
ptr[i] = s2[j];

ptr[i] = '\0';

return (ptr);
}
