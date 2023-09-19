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
char randpasswd[length];
char strpass[] = "abcdefghijklmnopqrsABCDEFGHIJKLMNOPQRS1234567890!@#$%ì&*()";
srand(time(NULL));
for (i = 0; i < length; i++)
{
randindex = rand() % length;
randpasswd[i] = strpass[randindex];
}
printf("rand passwd : %s", randpasswd);
return (0);
}
