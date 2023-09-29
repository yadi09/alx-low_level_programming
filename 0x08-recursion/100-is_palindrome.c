#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: 0;
 */

int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen(++s) + 1);
}

/**
 * is_same - function
 * @s: parameter
 * @n: parameter
 * @num: parameter
 * Return: 0;
 */

int is_same(char *s, int n, int num)
{
if (n == 0 && n < num)
return (1);
else if (n < num && n % 2 != 0)
return (1);
else if (*s == *(s + n - 1))
return (is_same(++s, n - 2, num) * 1);
else
return (0);
}



/**
 * is_palindrome - function
 * @s: parameter
 * Return: 0;
 */

int is_palindrome(char *s)
{
int num = _strlen(s);
return (is_same(s, num, num / 2));
}
