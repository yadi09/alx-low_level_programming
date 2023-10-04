#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: parameter
 * @av: parameter
 * Return: 0;
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0, sum = ac;
int *max;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
max = (int *)malloc(sizeof(int) * ac);
if (max == NULL)
return ('\0');
for (i = 0; i < ac; i++)
max[i] = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
max[i]++;
sum += max[i];
}
str = (char *)malloc(sizeof(char) * sum);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (j < max[i])
{
*str = av[i][j];
str++;
j++;
k++;
}
*str = '\n';
str++;
k++;
}
str = str - k;
free(max);
return (str);
}
