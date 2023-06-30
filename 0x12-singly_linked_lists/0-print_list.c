#include "lists.h"
#include <stdio.h>
/**
 * print_list- print linked list
 * @h: list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t acc = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil), 0");
		else
			printf("[%u] %s\n", h->len, h->str);
		acc++;
		h = h->next;
	}
	return (acc);
}

