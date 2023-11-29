#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function
 * @a: char
 * @n: int
 * Return: void
 **/

void print_opcodes(char *a, int n)
{
int i = 0;

while (i < n)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
i++;
}
printf("\n");

}

/**
 * main - main function
 * @argc: number of argument
 * @argv: arguments itself
 * Return: int
 **/

int main(int argc, char **argv)
{
int n;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);

return (0);
}

