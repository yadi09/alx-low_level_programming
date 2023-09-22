#include <stdio.h>
/**
 * main - the main function void
 *
 * the program print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 this output
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i == 9)
break;
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
