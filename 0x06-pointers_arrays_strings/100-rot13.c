#include "main.h"
/**
 * rot13 - function
 * this function encodes a string using rot13.
 * @str: parameter
 * Return: 0;
 */
char *rot13(char *str)
{
int i = 0, j = 0;
char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[i] != '\0')
{
j = 0;
while (j < 53)
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
