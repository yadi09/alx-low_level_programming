#include "main.h"
/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] < s2[i])
return (-1);
else if (s1[i] > s2[i])
return (1);
}
if (s1[i] == '\0' && s2[i] != '\0')
return (-1);
else if (s1[i] != '\0' && s2[i] == '\0')
return (1);
else
return (0);
}
