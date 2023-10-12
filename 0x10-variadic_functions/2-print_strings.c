#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: parameter
 * @n: parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
char *ptr;

va_list str;
va_start(str, n);

if (separator != NULL)
{
for (i = 0; i < (int)n; i++)
{
ptr = va_arg(str, char*);
printf("%s", (ptr != NULL) ? ptr : "(nil)");
if (i != (int)(n - 1))
printf("%s", separator);
else
printf("\n");
}
}
}
