#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: void;
 **/

void _puts_recursion(char *s)
{
int i = 1; /*uses for increase pointer of s*/

_putchar(*s); /*one char at a time*/

/*prints the whole string*/
if (*(s + i) != '\0')
	_puts_recursion(s + i);
else
	_putchar('\n');
}
