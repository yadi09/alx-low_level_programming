#include "main.h"


/**
 * _pow - functio
 * @base: ......
 * @exponent: .........
 * Return: ....
*/

double _pow(double base, int exponent)
{
if (exponent == 0)
{
return (1.0);
}
else if (exponent == 1)
{
return (base);
}
else if (exponent < 0)
{
return (1.0 / _pow(base, -exponent));
}
else
{
return (base * _pow(base, exponent - 1));
}
}


/**
 * binary_to_uint - function
 * @b: ...
 * Return: ....
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, max = 0, unsigned_num = 0;

if (b == NULL)
return (0);

while (b[max] != '\0')
max++;

for (i = 0; b[i] != '\0'; i++)
{
max--;
if (b[i] == '1')
unsigned_num += (b[i] - '0') * _pow(2, max);
else if (b[i] == '0')
;
else
return (0);
}

return (unsigned_num);
}
