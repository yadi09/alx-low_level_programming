#include "main.h"
/**
 * print_times_table - return int
 *
 * @n: parameter
 *
 * Return: 0;
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int mu = i * j;
_putchar(mu);
if (j != n)
{
if (mu <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
else if (mu <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
