#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * Return: 0;
 */

char *str_concat(char *s1, char *s2)
{
int i, j, sum, max = 0, max2 = 0;
char *str;

if (s1 != NULL)
{
while (*(s1 + max) != '\0')
max++;
}

if (s2 != NULL)
{
while (*(s2 + max2) != '\0')
max2++;
}

sum = max + max2;

str = (char *)malloc(sizeof(char) * (sum + 1));

if (str == NULL)
return ('\0');

for (i = 0; i < max; i++)
str[i] = s1[i];

for (j = 0; j < max2; j++, i++)
str[i] = s2[j];
return (str);
}
