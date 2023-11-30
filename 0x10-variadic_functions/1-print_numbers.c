#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

va_start(ap, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, int));

	if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	else
		printf("\n");
}
va_end(ap);

return;
}
