#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: parameter
 * @av: parameter
 * Return: 0;
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0;
int max;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
max++;
max++;
}

 str = (char *)malloc((max + 1) * sizeof(char));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (j < max && av[i][j] != '\0')
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

return (str);
}
