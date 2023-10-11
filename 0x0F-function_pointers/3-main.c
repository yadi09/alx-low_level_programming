#include "3-calc.h"

/**
 * main - main function
 * @argc: number of argument
 * @argv: elements
 * Return: int
 */

int main(int argc, char *argv[])
{
int (*oprt)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

oprt = get_op_func(argv[2]);

if (!oprt)
{
printf("Error\n");
exit(98);
}

printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

return (0);
}
