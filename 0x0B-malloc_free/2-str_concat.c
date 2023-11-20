#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated space
 **/


char *str_concat(char *s1, char *s2)
{
int max1 = 0, max2 = 0, i = 0, j = 0;
char *str_cat;

while (s1[max1] != '\0')
	max1++;

while (s2[max2] != '\0')
	max2++;

if (s1 == NULL && s2 == NULL)
	str_cat = "";

str_cat = malloc(sizeof(char) * (max1 + max2 + 1));
if (str_cat == NULL)
	return ('\0');

if (s1 != NULL)
{
	while (i < max1)
	{
	str_cat[i] = s1[i];
	i++;
	}
}
if (s2 != NULL)
{
	while (j < max2)
	{
	str_cat[i] = s2[j];
	i++;
	j++;
	}
}
str_cat[i] = '\0';

return (str_cat);
}
