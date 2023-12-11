#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: .......
 * @idx: ........
 * @n: ......
 * Return: node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *temp;
listint_t *single_temp;

if (*head == NULL || head == NULL)
return (NULL);

temp = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

for (i = 0; i <= idx && temp != NULL; i++)
{
if (i == (idx - 1))
{
single_temp = temp->next;
temp->next = new_node;
new_node->next = single_temp;
return (new_node);
}

temp = temp->next;
}

return (NULL);
}
