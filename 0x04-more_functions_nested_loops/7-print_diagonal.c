#include "main.h"
/**
 * print_diagonal - function name
 * this function draws a diagonal line on the terminal.
 * @n: parameter
 * Return: 0;
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j < i + 1; j++)
{
if (i == n - 1)
break;
else
_putchar(' ');
}
}
if (n <= 0)
_putchar('\n');
}
