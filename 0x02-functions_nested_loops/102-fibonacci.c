#include <stdio.h>
/**
 * main - main is void
 *
 * this program prints the first 50 Fibonacci numbers
 *
 * Return: 0;
 */
int main(void)
{
int i, a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (i = 0; i < 50; i++)
{
c = a + b;
printf("%d", c);
if (i != 49)
printf(", ");
a = b;
b = c;
}
printf("\n");
return (0);
}
