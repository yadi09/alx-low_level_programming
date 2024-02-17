#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * and allocate memory
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;

hash_table_t *hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);

hash_table->size = size;
hash_table->array = calloc(size, sizeof(hash_node_t *));

if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}

i = 0;
while (i < size)
{
hash_table->array[i] = NULL;
i++;
}

return (hash_table);
}
