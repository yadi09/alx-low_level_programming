#include "lists.h"

/**
 * sum_listint - function
 * @head: ....
 * Return: sum of elment
*/

int sum_listint(listint_t *head)
{
listint_t *temp;
int i, sum = 0;

if (head == NULL)
return (0);

temp = head;

for (i = 0; temp != NULL; i++)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
