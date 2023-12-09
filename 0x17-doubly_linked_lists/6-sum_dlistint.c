#include "lists.h"

/**
 * sum_dlistint - short description
 *
 * Description: long description
 *
 * @head: argument_1 description
 *
 * Return: return description
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int add_ = 0;

	if (head == NULL)
		return (add_);
	current = head;
	while (current)
	{
		add_ += current->n;
		current = curent->next;
	}
	return (add_);
}
