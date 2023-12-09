#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 *
 * @head: head of list
 * @n: value
 *
 * Return: return description
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		current = *head;
		while (current)
		{
			if (current->next == NULL)
			{
				new->prev = current;
				current->next = new;
				return (new);
			}
			current = current->next;
		}
	}
	return (NULL);
}
