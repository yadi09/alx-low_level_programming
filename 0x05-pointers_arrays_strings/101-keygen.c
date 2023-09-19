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
int length = 8;
int randindex;
char pass[length];
char strpass[] = "abcABCDEF7890defghijklmnopqrs123456GHIJKLMNOPQRS!@#$%ì&*()";
srand(time(NULL));
for (i = 0; i < length; i++)
{
randindex = rand() % length;
pass[i] = strpass[randindex];
}
printf("rand passwd : %s\n", pass);
return (0);
}
