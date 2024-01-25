#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: ......
 * @index: ...
 * Return: ...
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
  {
    unsigned int i;

    if (head == NULL)
      return (NULL);

    i = 0;
    while (head)
      {
	if (i == index)
	  return (head);
	head = head->next;
	i++;
      }

    return (NULL);
  }
