#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: linked list
 * @n: element of node
 * Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return ('\0');

newnode->n = n;
newnode->next = NULL;

if (*head == NULL)
*head = newnode;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newnode;
}

return (newnode);
}
