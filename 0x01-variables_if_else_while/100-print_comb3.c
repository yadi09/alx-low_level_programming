#include <stdio.h>
/**
 * main - the main function void
 *
 * this program print all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
int num, num2;
for (num = 0; num < 10; num++)
{
for (num2 = num + 1; num2 < 10; num2++)
{
putchar(num + '0');
putchar(num2 + '0');
if (num == 8)
break;
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
