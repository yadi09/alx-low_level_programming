#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: void;
 **/

void _puts_recursion(char *s)
{
_putchar(*s); /*one char at a time*/

/*prints the whole string*/
if (*(++s) != '\0')
	_puts_recursion(s);
else
	_putchar('\n');
}
