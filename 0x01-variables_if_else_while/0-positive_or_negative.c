#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check n is -ve or +ve
 *
 * betty style doc for function main goes there
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%i is positive\n", n);
if (n == 0)
printf("%i is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
