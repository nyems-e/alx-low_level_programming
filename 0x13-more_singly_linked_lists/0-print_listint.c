#include "lists.h"

/**
 * print_listint- print elements of linked list
 * @h: head of linked list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	count++;
	h = h->next;
}
return (count);
}
