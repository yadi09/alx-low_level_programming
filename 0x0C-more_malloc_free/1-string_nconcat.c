#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of char of s2 has to be concat
 * Return: pointer of concat string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int max1 = 0, max2 = 0;
unsigned int i, j;
char *new_str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[max1] != '\0')
	max1++;
while (s2[max2] != '\0')
	max2++;

if (n >= max2)
	new_str = malloc(sizeof(char) * (max1 + max2 + 1));
else
	new_str = malloc(sizeof(char) * (max1 + n + 1));

if (new_str == NULL)
	return (NULL);

for (i = 0; i < max1; i++)
	new_str[i] = s1[i];

for (j = 0; j < max2 && j < n; j++, i++)
	new_str[i] = s2[j];

new_str[i] = '\0';

return (new_str);
}
