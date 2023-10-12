#include <stdlib.h>
#include <stdio.h>

/**
 * ptr_opcode - program prints the opcodes of its own main function.
 * @ptr: parameter
 * @byt: parameter
 * Return: void
 */

void ptr_opcode(char *ptr, int byt)
{
int i;

for (i = 0; i < byt; i++)
{
printf("%.2hhx", ptr[i]);
if (i < byt - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - main program
 * @argc: ac
 * @argv: av
 * Return: int
 */

int main(int argc, char **argv)
{
int num;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}

ptr_opcode((char *)&main, num);
return (0);
}