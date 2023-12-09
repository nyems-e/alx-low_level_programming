#include "lists.h"

/**
 * add_dnodeint - add anew node at beginning
 *
 * @head: head of list
 * @n: number in list
 *
 * Return: return
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_;

	new_ = malloc(sizeof(dlistint_t));
	if (new_ == NULL)
		return (NULL);
	new_->n = n;
	new_->prev = NULL;
	new_->next = NULL;
	if (*head == NULL)
	{
		*head = new_;
		return (new_);
	}
	else
	{
		new_->next = *head;
		(*head)->prev = new_;
		*head = new_;
		return (new_);
	}
}
