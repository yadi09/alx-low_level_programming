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
int i = 0, j = 0;
int num = 0, num2 = 0;

while (i < (size * size))
{
j = a[i];
num += num + j;
i += size + 1;
}
i = size - 1;
while (i < ((size * size) - 1))
{
j = a[i];
num2 += j;
i += (size - 1);
}
printf("%i, %i\n", num, num2);

}
