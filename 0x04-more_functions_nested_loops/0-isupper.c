#include "main.h"
#include <stdio.h>
/**
 * _isupper - is return int
 * this program  checks for uppercase character.
 * Return: 0;
 */
int _isupper(int c)
{
int i;
for (i = 'A'; i < 'Z'; i++)
{
if (i == c)
return (1);
}
return (0);
}
