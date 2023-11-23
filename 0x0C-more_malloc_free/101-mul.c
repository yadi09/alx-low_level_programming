#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two positive numbers.
 * @argc: parameter
 * @argv: parameter
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int mul;

if (argc != 3)
	printf("Error\n");
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
