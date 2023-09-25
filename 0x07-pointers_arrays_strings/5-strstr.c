#include "main.h"
/**
 * _strstr - function
 * @haystack: parameter
 * @needle: parameter
 * Return: 0;
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0;

while (*(haystack) != '\0')
{

if (*(needle + i) == *(haystack))
{
i++;
if (*(needle + i) == '\0')
{

i = i - 1;
return (haystack - i);

}
haystack++;
}
else
{
needle = needle - i;
haystack++;
}
}

return ('\0');
}
