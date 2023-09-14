#include <stdio.h>
/**
 * main - main void
 *
 * this program prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0;
 */
int main(void)
{
int i, sum = 0;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
