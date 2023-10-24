#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t num_of_nodes = 0;

temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
num_of_nodes++;
}

return (num_of_nodes);
}
