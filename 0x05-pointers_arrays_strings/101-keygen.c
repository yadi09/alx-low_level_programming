#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main random passwd
 * Return: 0;
 */
int main(void)
{
int i;
int randindex;
char pass[8];
char strpass[] = "abcABCDEF7890defghijklmnopqrs123456GHIJKLMNOPQRS!@#$%ì&*()";
srand(time(NULL));
for (i = 0; i < 8; i++)
{
randindex = rand() % (sizeof(strpass) - 1);
pass[i] = strpass[randindex];
}
printf("rand passwd : %s\n", pass);
return (0);
}
