#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: linked list
 * @n: data of node
 * Return: The address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = *head;
listint_t *temp_node;
listint_t *newnode = malloc(sizeof(listint_t));
unsigned int i;

if (newnode == NULL)
return ('\0');

newnode->n = n;

idx--;
i = 0;
while (i < idx)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return ('\0');

temp_node = temp->next;
temp->next = newnode;
newnode->next = temp_node;

return (newnode);
}
