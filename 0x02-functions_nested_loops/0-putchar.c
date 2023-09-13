#include "main.h"
/**
 * main - the function main void
 *
 * the program print the string "_putchar"
 *
 * Return: 0;
 */
int main(void)
{
char string[] = "_putchar";
int i;
for (i = 0; i < 9; i++)
_putchar(string[i]);
_putchar('\n');
return (0);
}
