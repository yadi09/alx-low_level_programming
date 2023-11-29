#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of argv
 * @argv: vector
 * Return: int
*/

int main(int argc, char *argv[])
{
int result;
int (*get_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

get_func = get_op_func(argv[2]);
if (get_func == NULL)
{
printf("Error\n");
exit(99);
}

result = get_func(atoi(argv[1]), atoi(argv[3]));

printf("%d\n", result);

return (0);
}
