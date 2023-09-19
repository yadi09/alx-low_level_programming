#include "main.h"
/**
 * _atoi - function name
 * this function convert a string to an integer.
 * @s: parameter
 * Return: returns int;
 */
int _atoi(char *s)
{
int i = 0, brek = 0, sign = 1, retn = 0;
while (s[i])
{
if (s[i] == 45)
{
sign *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
brek = 1;
retn = (retn * 10) + (s[i] - '0');
i++;
}
if (brek == 1)
{
break;
}
i++;
}
retn *= sign;
return (retn);
}
