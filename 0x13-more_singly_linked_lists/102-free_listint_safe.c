#include "lists.h"

/**
 * free_listint_safe - function
 * @h: ......
 * Return: ........
 */

size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int num;
listint_t *temp;

if (!h || !*h)
	return (0);

while (*h)
{
num = *h - (*h)->next;

if (num > 0)
{
temp = (*h)->next;
*h = temp;
length++;
}
else
{
*h = NULL;
length++;
break;
}
}

*h = NULL;

return (length);
}
