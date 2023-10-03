#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * Return: 0;
 */

char *str_concat(char *s1, char *s2)
{
int i, sum, max = 0, max2 = 0;
char *str;

while (*(s1 + max) != '\0')
max++;
while (*(s2 + max2) != '\0')
max2++;

sum = max + max2;

str = (char *)malloc(sizeof(char) * (sum + 1));

if (str == NULL)
return ('\0');

for (i = 0; i < sum; i++)
{
if (i < max)
str[i] = s1[i];
else if (s2[i - max] != '\0')
str[i] = s2[i - max];
else
str[i] = '\0';
}
return (str);
}
