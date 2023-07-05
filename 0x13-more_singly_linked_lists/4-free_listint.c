#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- free list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *trck = head;
while (trck != NULL)
{
	head = head->next;
	free(trck);
	trck = head;
}
}
