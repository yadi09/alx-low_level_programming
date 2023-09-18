#include <string.h>
#include "main.h"
/**
 * print_rev - function name
 * @s: parameter
 */
void print_rev(char *s)
{
int max, i;
if (*s == '\0')
_putchar('\n');
max = strlen(s + 1);
for (i = max; i >= 0; i--)
_putchar(*(s + i));
_putchar('\n');
}
