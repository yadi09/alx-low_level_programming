#include "main.h"
#include <string.h>
/**
 * _puts - function name
 * @str: parameter
 * Return: 0;
 */
void _puts(char *str)
{
int i;
int max = strlen(str);
for (i = 0; i < max; i++)
_putchar(*(str + i));
_putchar('\n');
return;
}
