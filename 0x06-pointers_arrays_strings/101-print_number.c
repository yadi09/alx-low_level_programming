#include "main.h"
/**
 * print_number - function
 * @n: parameter
 * this function prints an integer.
 * Return: 0;
 */
void print_number(int n)
{
int n2;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
n2 = n;
if (n2 / 10)
{
print_number(n2 / 10);
}

_putchar(n2 % 10 + '0');

return;
}
