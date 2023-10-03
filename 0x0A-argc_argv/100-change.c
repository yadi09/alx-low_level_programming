#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: command line argumment
 * @argv: command line argumment
 * Return: 0;
 */

int main(int argc, char *argv[])
{
int i, cent, _coins = 0, num_coins;
__attribute__((unused)) int values[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}

cent = atoi(argv[1]);
_coins = 0;

for (i = 0; i < 5; i++)
{
num_coins = cent / values[i];

cent %= values[i];
_coins += num_coins;

if (cent == 0)
break;
}
printf("%d\n", _coins);

return (0);
}
