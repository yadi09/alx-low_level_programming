#include "main.h"
/**
 * factorial - function
 * @n: 0
 * Return: 0;
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n > 0)
return (factorial(n - 1) * n);
else
return (1);
}