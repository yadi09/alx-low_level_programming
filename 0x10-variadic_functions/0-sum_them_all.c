#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: parameter
 * Return: 0;
 */

int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;

va_list all;
va_start(all, n);

for (i = 0; i < (int)n; i++)
sum += va_arg(all, int);

va_end(all);

return (sum);
}
