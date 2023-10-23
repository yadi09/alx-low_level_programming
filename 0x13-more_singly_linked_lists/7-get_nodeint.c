#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: linked lists
 * @index: index of node
 * Return: The nth node of a listint_t
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int i = 0;

while (i < index)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return ('\0');

return (temp);
}
