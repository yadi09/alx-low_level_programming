#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: hash_table_t
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
  unsigned long int i;
  hash_node_t *temp, *node;

  if (ht == NULL)
    return;

  for(i = 0; i < ht->size; i++)
    {
      node = ht->array[i];
      while(node != NULL)
	{
	  temp = node->next;
	  free(node->key);
	  free(node->value);
	  free(node);
	  node = temp;
	}
    }

  free(ht->array);
  free(ht);
}
