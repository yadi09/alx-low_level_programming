#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%ld\n", hash_djb2((unsigned char *)s));
    printf("%ld\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%ld\n", hash_djb2((unsigned char *)s));
    printf("%ld\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%ld\n", hash_djb2((unsigned char *)s));
    printf("%ld\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
