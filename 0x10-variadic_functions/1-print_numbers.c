#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;

va_list num;
va_start(num, n);

for (i = 0; i < (int)n; i++)
{
printf("%d", va_arg(num, int));

if (separator != NULL && i != (int)(n - 1))
printf("%s", separator);
else
printf("\n");
}
va_end(num);
}
