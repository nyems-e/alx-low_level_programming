#include "lists.h"

/**
 * add_nodeint_end- add node to end
 * @head: pointer to first node
 * @n: string
 * Return: address of new element or  NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *trck = *head;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
	return (NULL);
}
temp->n = n;
temp->next = NULL;
if (trck != NULL) /*checking if linked list is empty */
{
	while (trck->next != NULL)
	{
		trck = trck->next;
	}
	trck->next = temp;
}
else
{
	*head = temp;

}
return (temp);
}
