#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers.
 * @argc: command line argument
 * @argv: command line argument
 * Return: 0;
 */

int main(int argc, char *argv[])
{
if (argc == 3)
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
else
{
printf("Error\n");
return (1);
}
return (0);
}
