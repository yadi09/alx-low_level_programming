#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _atoi - function that convert str to num
 * @str: string
 * Return: converted num
 **/

int _atoi(char *str)
{
int i, num = 0, mult = 1;

if (str == NULL)
        return ('\0');

for (i = 0; *str != '\0'; i++)
{
if (*str >= 48 && *str <= 57)
{
        num = (num * mult) + *str;
        mult *= 10;
        str++;
}
else
        return (0);
}

return (num);
}


/**
 * main - main function
 * @argc: number of vector
 * @argv: vector it self
 * Return: 0;
 **/

int main(int argc, char **argv)
{
int i, num, sum = 0;

if (argc == 1)
{
        printf("%d\n", 0);
        return (0);
}

for (i = 1; i < argc; i++)
{
num = _atoi(argv[i]);

if (num != 0)
        sum += atoi(argv[i]);
else
{
        printf("Error\n");
        return (1);
}
}

printf("%d\n", sum);

return (0);
}

