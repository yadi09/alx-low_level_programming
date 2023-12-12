#include "lists.h"

/**
 * print_listint_safe - function
 * @head: .....
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
long int num;
size_t i = 0;

while (head)
{
num = head - head->next;
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (num > 0)
	head = head->next;
else
{
	printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	break;
}
}

return (i);
}
