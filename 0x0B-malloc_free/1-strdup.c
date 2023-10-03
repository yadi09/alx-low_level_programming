#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: char parameter
 * Return: 0;
 */

char *_strdup(char *str)
{
int i, max = 0;
char *ptr;
if (str == NULL)
return ('\0');

while (*(str + max) != '\0')
max++;
max++;

ptr = (char *)malloc(sizeof(char) * max);

if (ptr == NULL)
return ('\0');
else
{
for (i = 0; i < max; i++)
ptr[i] = str[i];
}

return (ptr);
}
