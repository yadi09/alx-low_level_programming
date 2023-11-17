#include <stdio.h>

/**
 * main - main function
 * @argc: number of vector
 * @argv: vector it self
 * Return: 0;
 **/

int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
