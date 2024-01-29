#include "main.h"
#include <stdio.h>
/**
 * _isupper - is return int
 * this program  checks for uppercase character.
 * @c: parameter
 * Return: 0;
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
