#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node- insert node at beginning
 * @head: head of list
 * @str: string in node
 * Return: address of new element or NULLA
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
if (str == NULL)
{
	return (NULL);
}
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
	return (NULL);
}
temp->str = strdup(str);
if (temp->str == NULL)
{
	free(temp);
	return (NULL);
}
temp->len = _strlen_recursion(temp->str);
temp->next = *head;
*head = temp;
return (temp);
}







/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
if (*s > '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
