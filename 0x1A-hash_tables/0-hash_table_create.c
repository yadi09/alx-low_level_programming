#include "hash_tables.h"

/**
 * hash_table_create: function
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
  unsigned long int i = 0;
  
  hash_table_t *hash_table = malloc(sizeof(hash_table_t));
  if (hash_table == NULL)
    {
      perror("malloc fail!!!\n");
      return (NULL);
    }

  hash_table->size = size;
  hash_table->array = calloc(size, sizeof(hash_node_t *));
  if (hash_table->array == NULL)
    {
      perror("calloc error!!!\n");
      return (NULL);
    }

  while (i < size)
    {
      hash_table->array[i] = NULL;
      i++;
    }

  return (hash_table);
}
