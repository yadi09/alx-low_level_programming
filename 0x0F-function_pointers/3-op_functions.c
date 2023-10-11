#include "3-calc.h"

/**
 * op_add - function
 * @a: parameter
 * @b: parameter
 * Return: int
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function for sub
 * @a: parameter
 * @b: parameter
 * Return: int
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - func for mul
 * @a: parameter
 * @b: parameter
 * Return: int
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - func for div
 * @a: parameter
 * @b: parameter
 * Return: int
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**
 * op_mod - func for mod(%)
 * @a: parameter
 * @b: parameter
 * Return: int
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
