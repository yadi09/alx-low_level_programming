#include "main.h"
/**
 * print_number - function
 * @n: parameter
 * Return: 0;
 */
void print_number(int n)
{
int i = n;
if (n < 0)
{
_putchar(45);
i = i * -1;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
