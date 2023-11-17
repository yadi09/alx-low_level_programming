#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc <= 1)
{
	printf("0\n");
	return (0);
}

for (j = 1; j < argc; j++)
{
for (i = 0; argv[j][i]; i++)
{
if (argv[j][i] < '0' || argv[j][i] > '9')
{
	printf("Error\n");
	return (1);
}
}
}

for (i = 0; i < argc; i++)
sum += atoi(argv[i]);

printf("%d\n", sum);

return (0);
}

