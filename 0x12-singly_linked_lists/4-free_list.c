#include "lists.h"
#include <stdlib.h>
/**
 * free_list- free list_t list
 * @head: pointer to first node
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *trck = head;
while (trck != NULL)
{
	free(trck->str);
	free(trck);
	trck = trck->next;
}
}
