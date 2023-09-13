#include "main.h"
/**
 * print_sign - this function returns int value
 *
 * @n: this parameter hold the number that test is +, - or 0
 *
 * this function prints the sign of a number.
 *
 * Return: 0;
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
