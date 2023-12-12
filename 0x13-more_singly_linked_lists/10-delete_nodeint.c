#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: ....
 * @index: .....
 * Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp;
listint_t *single_temp;

if (*head == NULL || head == NULL)
return (-1);
temp = *head;

if (index == 0)
{
single_temp = temp->next;
free(temp);
*head = single_temp;
return (1);
}

for (i = 0; i <= index && temp != NULL; i++)
{
if (i == (index - 1))
{
single_temp = temp;
temp = temp->next;
single_temp->next = temp->next;
free(temp);
return (1);
}
temp = temp->next;
}

return (-1);
}
