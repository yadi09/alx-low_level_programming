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
long i, a = 1, b = 2, c;
printf("%ld, %ld, ", a, b);
for (i = 0; i <= 47; i++)
{
c = a + b;
printf("%ld", c);
if (i != 47)
printf(", ");
a = b;
b = c;
}
printf("\n");
return (0);
}
