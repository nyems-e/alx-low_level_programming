#include "lists.h"

/**
 * get_dnodeint_at_index - get node based on index
 *
 * @head: head of list
 * @indes: index
 *
 * Return: retur
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current = head;
	
	if (head == NULL)
		return (NULL)
	current = head;
	while (current)
	{
		if (idx == index)
			return (current);
		idx++;
		current = current->next;
	}
	return (NULL);
}
