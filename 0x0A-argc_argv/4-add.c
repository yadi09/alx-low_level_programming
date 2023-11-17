#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of vector
 * @argv: vector it self
 * Return: 0;
 **/

int main(int argc, char **argv)
{
int i, j, sum = 0;

if (argc <= 1)
{
	printf("0\n");
	return (1);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
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

