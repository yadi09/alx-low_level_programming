#include <stdio.h>
/**
 * main - the main function void
 *
 * this program print 0-9 using only putchar
 *
 * Return: 0
 */
int main(void)
{
int i;
char num;
for (i = 0; i < 10; i++)
{
num = i + '0';
putchar(num);
}
putchar('\n');
return (0);
}
