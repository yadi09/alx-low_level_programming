#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this function return int
 *
 * @n: parameter
 *
 * Return: 0;
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d", n);
}
else
{
while (n > 98)
printf("%d, ", n--);
printf("%d", n);
}
printf("\n");
}
