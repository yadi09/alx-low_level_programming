#include "lists.h"

/**
 * add_node_end - function that adds
 * a new node at the end of a list_t list.
 * @head: ...
 * @str: ...
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
unsigned int length = 0;

if (str == NULL)
{
write(1, "(str fail)!!!", 13);
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
write(1, "(malloc fail)!!!", 16);
return (NULL);
}

while (str[length] != '\0')
length++;

new_node->len = length;
new_node->str = strdup(str);
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
list_t *temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
