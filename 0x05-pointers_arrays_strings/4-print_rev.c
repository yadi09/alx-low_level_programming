#include <string.h>
#include "main.h"
/**
 * print_rev - function name
 * @s: parameter
 * Return: 0;
 */
void print_rev(char *s)
{
int i, max;
max = strlen(s + 1);
for (i = max; i >= 0; i--)
_putchar(*(s + i));
_putchar('\n');
return;
}
