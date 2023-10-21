#include "lists.h"

/**
 * list_len - count element of linked list
 * @h: linked list
 * Return: number of element
*/

size_t list_len(const list_t *h)
{
long unsigned int count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}