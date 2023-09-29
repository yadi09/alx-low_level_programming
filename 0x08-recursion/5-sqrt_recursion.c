#include "main.h"
/**
 * _sqrt_recursion - function 1
 * @n: parameter
 * Return: 0;
 */
int _sqrt_recursion(int n)
{
int num = 0;
return (_sqrt(num, n));
}

/**
 * _sqrt - function 2
 * @i: parameter
 * @j: parameter
 * Return: 0;
 */
int _sqrt(int i, int j)
{
if (i * i == j)
return (i);
else if (i * i > j)
return (-1);
return (_sqrt(i + 1, j));
}
