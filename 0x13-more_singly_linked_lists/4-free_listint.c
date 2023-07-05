#include "lists.h"
#include <stdlib.h>
/**
 * free_list- free list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(listint_t *head)
{
listint_t *trck = head;
while (trck != NULL)
{
	trck = trck->next;
	free(trck);
}
}
