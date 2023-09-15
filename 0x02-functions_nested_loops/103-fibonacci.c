#include <stdio.h>
/**
 * main - main void
 *
 * this program prints the sum of the even-valued terms,
 *
 * Return: 0;
 */
int main(void)
{
unsigned long i, num1 = 0, num2 = 1, num;
float sum;
for (i = 1; i > 0; i++)
{
num = num1 + num2;
if (num > 4000000)
break;
if ((num % 2) == 0)
sum = sum + num;
num1 = num2;
num2 = num;
}
printf("%.0f\n", sum);
return (0);
}
