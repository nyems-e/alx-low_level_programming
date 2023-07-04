#include "lists.h"

/**
 * listint_len- number of elements in linked lists
 * @h: head of list
 * Return: number of elments
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
	count++;
	h = h->next
}
return (count);
}
