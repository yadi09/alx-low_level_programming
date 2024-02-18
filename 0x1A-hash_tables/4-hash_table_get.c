#include "hash_tables.h"

/**
 * hash_table_get - function
 * @ht: hash_table_t type
 * @key: key
 * Return: char *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *node;

  if (ht == NULL || key == NULL || strlen(key) == 0)
    return (NULL);

  index = key_index((const unsigned char *)key, ht->size);
  node = ht->array[index];

  while (node != NULL)
    {
      if (strcmp(node->key, key) == 0)
	return (node->value);

      node = node->next;
    }

  return (NULL);
}
