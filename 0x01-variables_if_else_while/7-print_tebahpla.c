#include <stdio.h>
/**
 * main - the function main is void
 *
 * this program print lowercase alphabet reverse z - a
 *
 *Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
