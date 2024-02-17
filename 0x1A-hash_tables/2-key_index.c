#include "hash_tables.h"

/**
 * key_index - function
 * @key: key
 * @size: size of array
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);

return (hash_value % size);
}
