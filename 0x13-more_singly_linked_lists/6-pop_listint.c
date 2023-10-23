#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: linked list
 * Return: returns the head node’s data (n). if empty return 0
*/

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int te_mp = (*head)->n;

if (*head == NULL)
return (0);

*head = (*head)->next;
free(temp);

return (te_mp);
}
