#include "main.h"
/**
 * puts_half - function name
 * @str: parameter
 */
void puts_half(char *str)
{
int i, max = 0, half;
while (str[max] != '\0')
max++;
half = max;
if (max % 2 != 0)
max = (max -1) / 2;
else
max = max / 2;
for (i = max; i <= half; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
