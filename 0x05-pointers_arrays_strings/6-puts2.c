#include "main.h"
/**
 * puts2 - function name
 * @str: parameter
 */
void puts2(char *str)
{
int i, max = 0;
while (str[max] != '\0')
max++;

for (i = 0; i < max; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
