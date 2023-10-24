#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t num_of_nodes = 0;


while (h)
{
printf("%d\n", h->n);
num_of_nodes++;
h = h->next;
}

return (num_of_nodes);
}
