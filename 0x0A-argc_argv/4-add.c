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
int i, sum = 0;

if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
else if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0)
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
