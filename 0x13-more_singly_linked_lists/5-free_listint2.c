#include "lists.h"

/**
 * free_listint2- frre list
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
listint_t *trck;
while (*head == NULL)
{
	trck = (*head)->next;
	free(*head);
	*head = trck;
}
head = NULL;
}
