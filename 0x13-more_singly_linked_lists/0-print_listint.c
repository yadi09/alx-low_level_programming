#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: linked list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
unsigned int num_of_nodes = 0;

temp = h;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
num_of_nodes++;
}

return (num_of_nodes);
}
