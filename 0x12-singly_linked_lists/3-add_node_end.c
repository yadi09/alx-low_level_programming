#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - new node add at the end
 * @head: pointer of the 1st node
 * @str: string
 * Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
unsigned int count = 0;

if (str == NULL)
return ('\0');

while (str[count] != '\0')
count++;

newnode = malloc(sizeof(list_t));

if (newnode == NULL)
return ('\0');

newnode->str = strdup(str);
newnode->next = '\0';
newnode->len = count;

if (*head == NULL)
*head = newnode;
else
{
list_t *temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = newnode;
}

return (newnode);
}
