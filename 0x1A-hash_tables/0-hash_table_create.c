#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * and allocate memory
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;

hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
  return (NULL);
  perror("malloc fail\n");
}

hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);

if (hash_table->array == NULL)
{
  perror("malloc fail\n");
  return (NULL);
}

for (i = 0; i < size; i++)
  hash_table->array[i] = NULL;

return (hash_table);
}
