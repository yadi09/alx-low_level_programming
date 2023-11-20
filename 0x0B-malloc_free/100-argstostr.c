#include "main.h"

/**
 * argstostr - function that concatenates all the arguments
 * @ac: number of argument
 * @av: argument it self
 * Return: 0;
 **/

char *argstostr(int ac, char **av)
{
int i, j, k, max = 0;
char *str;

if (ac == 0 || av == NULL)
	return ('\0');

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
	j++;
max += j + 1;
}
max += 1;

str = malloc(sizeof(char) * max);
if (str == NULL)
	return ('\0');

i = 0;
for (j = 0; j < ac; j++)
{
k = 0;
while (av[j][k] != '\0')
{
	str[i] = av[j][k];
	i++;
	k++;
}
	str[i] = '\n';
	i++;
}
str[i] = '\0';

return (str);
}
