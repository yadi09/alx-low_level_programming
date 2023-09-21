#include "main.h"
/**
 * leet - function
 * this function encodes a string into 1337.
 * @str: parameter
 * Return: 0;
 */
char *leet(char *str)
{
int i = 0, j = 0;
char string[] = "AaEeOoTtLl";
char encode[] = "4433007711";

while (str[i] != '\0')
{
j = 0;
while (j < 10)
{
if (str[i] == string[j])
{
str[i] = encode[j];
break;
}
j++;
}
i++;
}

return (str);
}
