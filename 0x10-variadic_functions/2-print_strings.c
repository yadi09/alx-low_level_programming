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

for (i = 0; i < (int)n; i++)
{
if (separator != NULL && i != 0)
printf("%s", separator);
ptr = va_arg(str, char*);
printf("%s", (ptr != NULL) ? ptr : "(nil)");
}
printf("\n");
va_end(str);
}
