#include "main.h"

/**
 * get_endianness - function
 * Return: void
 */

int get_endianness(void)
{
unsigned int n = 1;
char *str = (char *) &n;

return (*str);
}

