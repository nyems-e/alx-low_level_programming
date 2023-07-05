#include "lists.h"

/**
 * add_nodeint- add a new node at beginning
 * @head: first node
 * @n: int
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(new_node));
if (new_node == NULL)
{
	return (NULL);
}
new_node->next = *head;
new_node->n = n;
*head = new_node;
return (new_node);
}
