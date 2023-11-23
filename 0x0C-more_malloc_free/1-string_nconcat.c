#include "main.h"

/**
 * concat_str - concatenates two string
 * @s1: the first string
 * @s2: the second string
 * @new_str: pointer to concatenate string
 * @max1: number of character of s1
 * @max2: number of character of s2
 * @n: number of char of s2 has to be concat
 * Return: pointer to new concat string if fails NULL
 **/

char *concat_str(char *s1, char *s2, char *new_str,
unsigned int max1, unsigned int max2, unsigned int n)
{
unsigned int i = 0, j = 0;

while (i < max1)
{
	new_str[i] = s1[i];
	i++;
}

while (j < max2 && j < n)
{
new_str[i] = s2[j];
i++;
j++;
}

new_str[i] = s2[j];

return (new_str);
}


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

new_str = concat_str(s1, s2, new_str, max1, max2, n);

return (new_str);
}
