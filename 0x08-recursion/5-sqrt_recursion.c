#include "main.h"

/**
 * _sqr - returns the natural square root of a number.
 * @num: square root of number
 * @n: number
 * Return: num
 **/

int _sqr(int num, int n)
{
if (num > n)
	return (-1);

if (n == num * num)
	return (num);
else
	num = _sqr(++num, n);
return (num);
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root of a number.
 **/

int _sqrt_recursion(int n)
{
int num;
num = _sqr(0, n);
return (num);
}
