#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that print all the elements of a list_t list.
 * @h: type list_t struct
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *cpy_h;
size_t i = 0;

if (h == NULL)
return ('\0');

cpy_h = h;
i = 0;

while (cpy_h != NULL)
{
printf("[%d] %s\n", cpy_h->len, (cpy_h->str) ? cpy_h->str : "(nil)");
cpy_h = cpy_h->next;
i++;
}

return (i);
}
