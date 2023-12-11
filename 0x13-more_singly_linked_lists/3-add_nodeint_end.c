#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: .......
 * @n: ...........
 * Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
int i;
listint_t *temp = *head;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}

for (i = 0; temp != NULL; i++)
{
if (temp->next == NULL)
{
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}

return (new_node);
}
