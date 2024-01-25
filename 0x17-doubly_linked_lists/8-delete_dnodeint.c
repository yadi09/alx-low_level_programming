#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: ......
 * @index: .........
 * Return: ...
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  unsigned int i = 0;
  dlistint_t *temp = *head;
  dlistint_t *temp_temp;
  if (!head || !(*head))
    return (-1);

  if (temp->next == NULL && i == (index - 1))
    {
      free(temp);
      return (1);
    }

  temp = temp->next;
  while (temp)
    {
      if (i == (index - 1))
	{
	  temp_temp = temp->next;
	  if (temp->next->next != NULL)
	    {
	      temp->next = temp->next->next;
	      temp->next->next->prev = temp;
	      
	    }
	  else
	    {
	      temp->next = NULL;
	    }

	  if (temp_temp != NULL)
	    free(temp_temp);

	  return (1);
	}
      i++;
      temp = temp->next;
    }

  return (-1);
}
