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
list_t *newnode = malloc(sizeof(list_t));
char *dupstr = NULL;
int count = 0;

if (str == NULL)
return ('\0');

dupstr = strdup(str);

while (dupstr[count] != '\0')
count++;

newnode->str = malloc(sizeof(char) * count);

if (newnode->str == NULL)
return ('\0');

newnode->str = dupstr;
newnode->next = *head;
newnode->len = count;
*head = newnode;

    return (*head);
}