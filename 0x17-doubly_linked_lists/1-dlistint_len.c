#include "lists.h"

/**
 * dlistint_len - print element
 *
 * @h: double linked list pointer
 *
 * Return: return description
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t track;

	current = (dlistint_t *)h
	track = 0;
	while (current)
	{
		track++;
		current = current->next;
	}
	return (track);
}
