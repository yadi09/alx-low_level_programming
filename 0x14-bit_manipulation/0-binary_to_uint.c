#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
*/

unsigned int power_of(unsigned int num, unsigned int exponent);

unsigned int binary_to_uint(const char *b)
{
    int max = 0, i;
    unsigned int result;

    if (b == NULL)
    return (0);

    while (b[max] != '\0')
    max++;

    while (*b)
    {
        if (*b != '1' && *b != '0')
        return (0);
        else
        b++;
    }
    b--;

    i = 0;
    result = 0;
    while (i < max)
    {
        int num = *b - '0';

        result += (num * power_of(2, i));
        b--;
        i++;
    }
    
    return (result);
}

/**
 * power_of - calculate the power of a given number
 * @num: base number
 * @exponent: exponent of num
 * Return: the result;
*/

unsigned int power_of(unsigned int num, unsigned int exponent)
{
    unsigned int result = 1;

    if (exponent == 0)
    return (1);
    else
    {
        while (exponent > 0)
        {
        result = result * num;
        exponent--;
        }
    }

    return (result);
}
