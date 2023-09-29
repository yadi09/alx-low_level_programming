#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function
 * @a: parameter
 * @size: parameter
 * Return: 0;
 */
void print_diagsums(int *a, int size)
{
int num = 0, num2 = 0;
int i = 0;
while (i < size)
{
num = num + a[i * size + i];
i++;
}
for (i = size - 1; i >= 0; i++)
{
num2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", num, num2);
}
