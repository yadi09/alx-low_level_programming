#include <stdio.h>
/**
 * main - main function is void
 *
 * this program print lower case except e & q
 *
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'e' || alpha == 'q')
continue;
putchar(alpha);
}
putchar('\n');
return (0);
}
