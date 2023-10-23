#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list
 * Return: number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
size_t num_of_elemrnt = 0;

while (h != NULL)
{
h = h->next;
num_of_elemrnt++;
}

return (num_of_elemrnt);
}
