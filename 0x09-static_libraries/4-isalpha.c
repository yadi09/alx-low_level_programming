#include "main.h"
/**
 * _isalpha - this function return int value
 *
 * @c: this parametr int data type
 *
 * this function checks for alphabetic character.
 *
 * Return: 0;
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
