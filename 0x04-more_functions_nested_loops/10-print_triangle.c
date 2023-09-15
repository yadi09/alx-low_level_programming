#include "main.h"
/**
 * print_triangle - main
 * @size: parameter
 * Return: 0;
 */
void print_triangle(int size)
{
int m, n, o;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (m = 1; m <= size; m++)
{
for (o = size - m; o >= 1; o--)
{
_putchar(' ');
}
for (n = 1; n <= m; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
