#include "lists.h"

/**
 * list_len- length of list
 * @h: linke list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}

