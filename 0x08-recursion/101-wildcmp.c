#include "main.h"
/**
 * check - function
 * @str0: parameter
 * @str1: parameter
 * Return: 0;
 */

int check(char *str1, char *str2, int i, int j)
{
if (str1[i] == '\0' && str2[j] == '\0')
return (1);
if (str1[i] == str2[j])
return (check(str1, str2, i + 1, j + 1));
if (str1[i] == '\0' && str2[j] == '*')
return (check(str1, str2, i, j + 1));
if (str2[j] == '*')
return (check(str1, str2, i + 1, j) || check(str1, str2, i, j + 1));
return (0);
}


/**
 * wildcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: 0;
 */

int wildcmp(char *s1, char *s2)
{
return (check(s1, s2, 0, 0));
}
