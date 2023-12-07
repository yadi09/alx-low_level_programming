#include "lists.h"

/**
 * free_list - function that free the head
 * @head: ....
 * Return: void
*/

void free_list(list_t *head)
{
list_t *temp;

if (head == NULL)
return;

while (head)
{
if (head->str != NULL)
free(head->str);

temp = head->next;
free(head);
head = temp;
}
}
