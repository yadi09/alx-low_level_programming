#include <string.h>
#include "main.h"
/**
 * rev_string - function name
 * @s: parameter
 */
void rev_string(char *s)
{
int i, j;
char temp;
j = strlen(s) - 1;
for (i = 0; i < j; i++)
{
while (1)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j--;
break;
}
}
}
