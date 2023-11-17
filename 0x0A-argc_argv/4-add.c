#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc: number of vector
 * @argv: vector it self
 * Return: 0;
 **/

int main(int argc, char **argv)
{
int i, num, sum = 0;

if (argc <= 1)
{
	printf("0\n");
	return (1);
}

for (i = 1; i < argc; i++)
{
num = _atoi(argv[i]);

if (num != 0)
	sum += atoi(argv[i]);
else
{
	printf("Error\n");
	return (-1);
}
}

printf("%d\n", sum);

return (0);
}
