#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print elements
 * @h: linked list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp;
unsigned int i = 0;


temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
i++;
}

return (i);
}
