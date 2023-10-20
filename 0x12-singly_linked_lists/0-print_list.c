#include "lists.h"

/**
 * print_list - ...
 * @h: ..
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
    long unsigned int n = 0;

    if (h == NULL)
    return (-1);

    while (h != NULL)
    {
        n++;
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }

    return (n);
}