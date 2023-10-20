#include "lists.h"

/**
 * print_list - ..
 * @h: ..
 * Return: number of nodes
 **/

size_t print_list(const list_t *h)
{
    size_t n = 0;

	if (h == NULL)
	return (-1);

    while (h != NULL)
    {
        if (h->str == NULL)
        printf("[0] (nil)\n");
        else
        printf("[%d] %s\n", h->len, h->str);
        
        n++;
        h = h->next;
    }

	return (n);
}
