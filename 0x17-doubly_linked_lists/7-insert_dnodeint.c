#include "lists.h"

/**
 * insert_dnodeint_at_index - short description
 *
 * Description: long description
 *
 * @h: list head
 * @idx: argument_1 description
 * @n: argument_2 description
 *
 * Return: return description
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint *current, *previous, *new_node;
	unsigned int track = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	
