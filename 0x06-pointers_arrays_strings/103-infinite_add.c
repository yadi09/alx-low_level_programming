#include "main.h"
/**
 * infinite_add - function
 * @n1: parameter 1
 * @n2: parameter 2
 * @r: parameter 3
 * @size_r: parameter 4
 * Return: 0;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a, b, c, d, temp, f;

for (a = 0; n1[a]; a++)
;
for (b = 0; n2[b]; b++)
;
if (a > size_r || b > size_r)
return (0);
temp = 0;
for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
{
f = temp;
if (a >= 0)
f += n1[a] + '0';
if (b >= 0)
f += n2[b] + '0';
if (a < 0 && b < 0 && f == 0)
break;

temp = f / 10;
r[c] = f % 10 + '0';
}
r[c] = '\0';
if (a >= 0 || b >= 0 || temp)
return (0);
for (c -= 1, d = 0; d < c; c--, d++)
{
temp = r[c];
r[c] = r[d];
r[d] = temp;
}
return (r);
}
