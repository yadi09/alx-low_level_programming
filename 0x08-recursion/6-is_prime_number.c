#include "main.h"
/**
 * is_prime_number - function
 * @n: parameter
 * Return: 0;
 */
int is_prime_number(int n)
{
return (PC(2, n));
}

/**
 * PC - function
 * @num: parameter
 * @n: parameter
 * Return: 0;
 */
int PC(int num, int n)
{
if (num >= n)
return (0);
else if (num * 2 > n)
return (1);
else if (n % num == 0)
return (0);

return (PC(num + 1, n));
}
