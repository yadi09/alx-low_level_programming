#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add node to beginning
 * @head: address of the 1st element
 * @str: string
 * Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int count = 0;

if (str == NULL)
return ('\0');

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return ('\0');

while (str[count] != '\0')
count++;

newnode->str = strdup(str);
newnode->next = *head;
newnode->len = count;
*head = newnode;

    return (*head);
}