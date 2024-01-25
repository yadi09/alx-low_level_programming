#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: .....
 * @idx: .....
 * @n: .......
 * Return: .......
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *temp = *h;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL || h == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (idx == 0)
{
add_dnodeint(h, n);
return (new_node);
}

while (temp)
{
if (temp->next == NULL && i == (idx - 1))
{
add_dnodeint_end(h, n);
return (new_node);
}
else if (i == (idx - 1))
{
new_node->prev = temp;
new_node->next = temp->next;
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
i++;
}

free(new_node);
return (NULL);
}
