#include <stdio.h>
/**
 * main - the main function is void
 *
 * this program print all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
int num;
char alpha;
for (num = 0; num < 10; num++)
putchar(num + '0');
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
