#include "main.h"
/**
 * _strspn - function
 * @s: parameter
 * @accept: parameter
 * Return: 0;
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, temp = 0, num;
num = temp;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
temp++;
break;
}
}

if (num == temp)
return (temp);
else
num = temp;
}
return (temp);
}
