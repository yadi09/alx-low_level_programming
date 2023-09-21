#include "main.h"
/**
 * print_number - function
 * @n: parameter
 * this function prints an integer.
 * Return: 0;
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}

if (n / 10)
{
print_number(n / 10);
}

_putchar(n % 10 + '0');

return;
}
