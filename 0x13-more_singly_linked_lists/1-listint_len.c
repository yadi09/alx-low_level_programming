#include "lists.h"

/**
 * listint_len - function
 * @h: .........
 * Return: number of node
*/

size_t listint_len(const listint_t *h)
{
const listint_t *temp;
int i;

if (h == NULL)
return ('\0');

temp = h;
for (i = 0; temp != NULL; i++)
{
temp = temp->next;
}

return (i);
}
