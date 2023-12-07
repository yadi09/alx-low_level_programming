#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: ...
 * @str: .....
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int length = 0;

if (str == NULL)
return ('\0');

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return ('\0');

while (str[length] != '\0')
length++;

new_node->len = length;
new_node->str = strdup(str);

new_node->next = (*head);
*head = new_node;

return (*head);
}
