#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: hash_table_t type
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
  hash_node_t **node;
  unsigned long int i, to_check = 0;

  if (ht == NULL)
    {
      printf("{}\n");
      return;
    }

  node = ht->array;
  printf("{");

  for (i = 0; i < ht->size; i++)
    {
      while (node[i])
	{
	  printf("'%s': '%s'", node[i]->key, node[i]->value);
	  to_check = 1;
	  if (node[i]->next != NULL)
	    {
	      printf(", ");
	    }
	  node[i] = node[i]->next;
	}
      if (node[i + 1] && to_check == 1)
	printf(", ");
    }
  printf("}\n");
}
