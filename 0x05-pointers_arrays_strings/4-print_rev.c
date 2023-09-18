#include <string.h>
#include "main.h"
/**
 * print_rev - function name
 * @s: parameter
 * Return: 0;
 */
void print_rev(char *s)
{
int max, i;
if (*s == '\0')
_putchar('e');
max = strlen(s + 1);
for (i = max; i >= 0; i--)
_putchar(*(s + i));
_putchar('\n');
return;
}
