#include "lists.h"

/**
 * print_listint - function that print elements
 * @h: linked list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t i;

if (h == NULL)
return ('\0');

temp = h;
for (i = 0; temp != NULL; i++)
{
printf("%d\n", temp->n);
temp = temp->next;
}

return (i);
}
