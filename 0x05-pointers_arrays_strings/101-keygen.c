#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main random passwd
 * Return: 0;
 */
int main(void)
{
int i = 0;
int randindex;
char pass[50];
char strpass[] = "abcdefghijklmnopqrsABCDEFGHIJKLMNOPQRS1234567890£$%&()";
int max = 0;
while (strpass[max] != '\0')
max++;
srand(time(NULL));
for (i = 0; i < 15; i++)
{
randindex = rand() % max;
pass[i] = strpass[randindex];
}
printf("rand passwd : %s\n", pass);
return (0);
}
