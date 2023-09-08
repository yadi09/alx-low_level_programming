#include <stdio.h>
/**
 * main - main function void
 *
 * this program print lower and upper case alphabet a-z
 *
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
