#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string.
 * @s: string
 * Return: length of a string.
 **/

int _strlen_recursion(char *s)
{
int sum = 1;

if (*s == '\0')
	return (0);
else
{
	s++;
	sum = sum + _strlen_recursion(s);
}

return (sum);
}
