#include "main.h"
/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: 0;
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int j = 0, i = 0;

while (*(haystack) != '\0')
{
while (haystack[i] == needle[0])
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
