#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: linked list
 * Return: returns the head node’s data (n). if empty return 0
*/

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int te_mp;

if (head == NULL || *head == NULL)
return (0);

te_mp = (*head)->n;

*head = (*head)->next;
free(temp);

return (te_mp);
}
