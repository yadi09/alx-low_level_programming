#include "lists.h"

/**
 * pop_listint - function
 * @head: ......
 * Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL || head == NULL)
return (0);

n = (*head)->n;
temp = (*head)->next;

free(*head);

*head = temp;

return (n);
}
