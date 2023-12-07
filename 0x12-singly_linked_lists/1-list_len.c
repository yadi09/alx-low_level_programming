#include "lists.h"

/**
 * list_len - function that returns
 * the number of elements in a linked list_t list.
 * @h: type list_t struct
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
size_t i = 0;
const list_t *cpy_h;

if (h == NULL)
return ('\0');

cpy_h = h;

while (cpy_h)
{
cpy_h = cpy_h->next;
i++;
}

return (i);
}
