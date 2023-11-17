#include "main.h"
#include <stddef.h>

/**
 * _atoi - function that convert str to num
 * @str: string
 * Return: converted num
 **/

int _atoi(char *str)
{
int i, num = 0, mult = 1;

if (str == NULL)
	return ('\0');

for (i = 0; *str != '\0'; i++)
{
if (*str >= 48 && *str <= 57)
{
	num = (num * mult) + *str;
	mult *= 10;
	str++;
}
else
	return (0);
}

return (num);
}
