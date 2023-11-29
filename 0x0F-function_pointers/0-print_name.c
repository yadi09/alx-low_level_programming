#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints a name.
 * @name: string name
 * @f: function pointer
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
f(name);

return;
}
