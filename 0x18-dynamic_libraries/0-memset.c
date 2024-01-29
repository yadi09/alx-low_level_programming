#include "main.h"
/**
 * _memset - function
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(s + i) = b;

return (s);
}
