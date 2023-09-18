#include "main.h"
/**
 * print_rev - function name
 * @s: parameter
 */
void print_rev(char *s)
{
int j = 0, i;
 
while(*(s + j) != '\0')
j++;

for (i = j - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
