#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all nodes
 * @head: the 1st node
 * Return: void
*/

void free_list(list_t *head)
{
    list_t *temp;

    temp = malloc(sizeof(list_t));
    if (temp == NULL)
    return;

    temp = head->next;

    while (head != NULL)
    {
        free(head);

        if (temp != NULL)
        {
        head = malloc(sizeof(list_t));
        head = temp;
        temp = head->next;
        }

    }
    free(temp);
    }