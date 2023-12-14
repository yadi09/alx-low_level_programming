#include "main.h"

/**
 * print_binary - function
 * @n: ......
 * Return: ....
*/

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int num;

for (i = 63; i >= 0; i--)
{
num = n >> i;

if (num & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
