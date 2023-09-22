#include <stdio.h>
/**
 * main - the main function void
 *
 * this program prints all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
int num, num2, num3;
for (num = 0; num < 10; num++)
{
for (num2 = num + 1; num2 < 10; num2++)
{
for (num3 = num2 + 1; num3 < 10; num3++)
{
putchar(num + '0');
putchar(num2 + '0');
putchar(num3 + '0');
if (num == 7)
break;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
