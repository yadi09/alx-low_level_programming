#include "main.h"
/**
 * _islower - this function has int value and parameter c
 *
 * @c: the parameter int c
 *
 * this function checks for lowercase character.
 *
 * Return: 0;
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
