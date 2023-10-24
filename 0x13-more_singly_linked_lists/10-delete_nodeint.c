#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: linked list
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *temp_node;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
return (1);
}

temp_node = *head;
while (i < index - 1)
{
if (temp_node->next == NULL)
return (-1);

temp_node = temp_node->next;
}

temp = temp_node->next;
temp_node->next = temp->next;

free(temp);

return (1);
}