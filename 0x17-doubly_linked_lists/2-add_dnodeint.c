#include "lists.h"

/**
 * add_dnodeint - funcrtion
 * @head: .........
 * @n: .......
 * Return: .....
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
  {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
      return (NULL);

    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;

    if (*head != NULL)
      {
	(*head)->prev = new_node;
	*head = new_node;
      }
    else
      {
	*head = new_node;
      }
    

    return (*head);
  }
