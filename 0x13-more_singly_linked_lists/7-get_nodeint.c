#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: ......
 * @index: .........
 * Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i;

if (head == NULL)
return (NULL);
temp = head;

for (i = 0; temp != NULL; i++)
{
if (i == index)
{
return (temp);
}
temp = temp->next;
}

return (NULL);
}
