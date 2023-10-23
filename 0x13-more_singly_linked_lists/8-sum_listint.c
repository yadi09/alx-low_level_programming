#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: linked lists
 * Return: sum of all data
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
