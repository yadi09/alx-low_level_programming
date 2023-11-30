#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
char *ptr;
unsigned int i;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(ap, char*);
printf("%s", (ptr != NULL) ? ptr : "(nil)");
if (separator != NULL && i != (n - 1))
	printf("%s", separator);
}
printf("\n");

va_end(ap);

return;
}
