#include "main.h"
/**
 * string_toupper - function
 * this function changes all lowercase letters of a string to uppercase.
 * @str: parameter
 * Return: 0;
 */
char *string_toupper(char *str)
{
int i, smax = 0;

while (str[smax] != '\0')
smax++;

for (i = 0; i < smax; i++)
{
if (*(str + i) >= 97 && *(str + i) <= 122)
*(str + i) = *(str + i) - 32;
}

return (str);
}
