#include "lists.h"

/**
 * free_listint - function
 * @head: .......
 * Return: void
*/

void free_listint(listint_t *head)
{
listint_t *temp;
int i;

if (head == NULL)
return;

for (i = 0; head != NULL; i++)
{
temp = head->next;
free(head);
head = temp;
}
}
