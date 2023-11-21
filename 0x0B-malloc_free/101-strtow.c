#include <stdlib.h>

/**
 * get_max - get max
 * @str: parameter
 * Return: 0;
 */

int get_max(char *str)
{
int i = 0, string = 0;

while (str[i] != '\0')
{
if (str[i] != 32)
{
while (1)
{
if (str[i] == 32 || str[i] == '\0')
{
string++;
break;
}
i++;
}
if (str[i] == '\0')
break;
}
i++;
}
return (string);
}

/**
 * _text - get text
 * @str: parameter
 * @text: parameter
 * @string: parameter
 * Return: 0;
 */

char **_text(char *str, char **text, int string)
{
int i = 0, w = 0, j = 0;

while (str[i] != '\0' && w < string)
{
if (str[i] != 32)
{
text[w][j] = str[i];
j++;
i++;

if (str[i] == 32 || str[i] == '\0')
{
text[w][j] = '\0';
w++;
j = 0;
}
i--;
}
i++;
}
text[string] = '\0';

return (text);
}

/**
 * strtow - function that splits a string into words.
 * @str: parameter
 * Return: 0;
 */

char **strtow(char *str)
{
int i = 0, l = 0, k = 1, string;
char **txt;
char **text;

if (str == NULL)
return ('\0');

string = get_max(str);
if (string == 0)
return ('\0');

text = malloc(sizeof(char *) * string + 15);
if (text == NULL)
return ('\0');

i = 0;

while (str[i] != '\0' && l < string)
{
if (str[i] != 32)
{
while (str[i] != '\0')
{
i++;
if (str[i] == 32 || str[i] == '\0')
{
text[l] = malloc(sizeof(char) * k);
l++;
k = 1;
break;
}
k++;
}
}
i++;
}

txt = _text(str, text, string);

return (txt);
}

