#include "lists.h"
#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - print some text befere main function
 * Return: void
*/

void before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
