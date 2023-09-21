#include "main.h"
/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
int i, j = n - 1, temp, half;
half = n / 2;

for (i = 0; i < half; i++)
{
while (j >= half)
{
temp = *(a + i);
*(a + i) = *(a + j);
*(a + j) = temp;
j--;
break;
}
}
}
