#include "main.h"

/**
 * is_prime_num - ...........
 * @n: ........
 * Return: 0;
 **/

int is_prime_number(int n)
{
return (prime(2, n));
}


/**
 * prime - ....
 * @num: ........
 * @n: ........
 * Return: 0;
 **/

int prime(int num, int n)
{
if (num >= n)
	return (0);
else if (num * 2 > n)
	return (1);
else if (n % num == 0)
	return (0);

return (prime(num + 1, n));
}
