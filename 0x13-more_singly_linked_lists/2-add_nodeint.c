#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: linked list
 * @n: element of node
 * Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return ('\0');

newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
