#include "main.h"
/**
 * cap_string - function
 * @str: parameter char
 * Return: 0;
 */
char *cap_string(char *str)
{
char *str1 = str;

if (str1[0] >= 97 && str1[0] <= 122)
str[0] = str1[0] - 32;

while (*str1 != '\0')
{
if (*str1 == ' ' || *str1 == '.' || *str1 == ')' || *str1 == '\t'
|| *str1 == '!' || *str1 == '{' || *str1 == '\n' || *str1 == '?'
|| *str1 == '}' || *str1 == ',' || *str1 == '"' || *str1 == ';'
|| *str1 == '(')
{
str1++;

if (*str1 >= 97 && *str1 <= 122)
{
*str1 = *str1 - 32;
str1++;
}
}
else
str1++;
}

return (str);
}
