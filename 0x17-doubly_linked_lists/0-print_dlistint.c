#include "lists.h"

/**
 * print_dlistint - print element
 *
 * @h: double linked list pointer
 *
 * Return: return description
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t track;
	current = (dlistint_t *)h
	track = 0;
	while (current)
	{
		track++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (track);
}
