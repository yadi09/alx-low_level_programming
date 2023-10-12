#include "variadic_functions.h"

/**
 * print_all - function
 * @format: parameter
 * Return: void
 */

void print_all(const char * const format, ...)
{
unsigned int i = 0, num = 0;
char *ptr;

va_list all;
va_start(all, format);
while (format && format[i] != '\0')
{
switch (format[i])
{case 'c':
switch (num)
{ case 1: printf(", "); }
num = 1;
printf("%c", va_arg(all, int));
break;
case 'i':
switch (num)
{case 1: printf(", "); }
num = 1;
printf("%d", va_arg(all, int));
break;
case 'f':
switch (num)
{case 1: printf(", "); }
num = 1;
printf("%f", va_arg(all, double));
break;
case 's':
switch (num)
{case 1: printf(", "); }
num = 1;
ptr = va_arg(all, char*);
if (ptr)
{printf("%s", ptr);
break; }
printf("%p", ptr);
break; }
i++;
}
printf("\n");
va_end(all);
}
