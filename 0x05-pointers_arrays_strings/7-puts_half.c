#include "main.h"
/**
 * puts_half - function name
 * @str: parameter
 */
void puts_half(char *str)
{
int i, max = 0;
while (str[max] != '\0')
max++;

if (max % 2 != 0)
max = (max - 1) / 2;
else
max = max / 2;

for (i = max; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
