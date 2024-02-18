#include "hash_tables.h"

/**
 * create_new_node - function
 * @key: key
 * @value: value
 * Return: new node
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
hash_node_t *node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (NULL);

node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;

return (node);
}



/**
 * hash_table_set - function
 * @ht: hash_table_set type
 * @key: key
 * @value: value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *node;

if (key == NULL || strlen(key) == 0 || ht == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
node = create_new_node(key, value);
if (node == NULL)
return (0);

ht->array[index] = node;
return (1);
}

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}

new_node = create_new_node(key, value);
if (new_node == NULL)
return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
