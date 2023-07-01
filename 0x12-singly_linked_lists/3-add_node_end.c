#include "lists.h"

/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
if (*s > '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}

/**
 * add_node_end- add node to end
 * @head: pointer to first node
 * @str: string
 * Return: address of new element or  NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp = *head;
list_t *trck = *head;
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
	return (null);
}
temp->str = strdup(str);
if (temp->str == NULL)
{
	free(temo)
	return(NULL);
}
temp->len = _strlen_recursion(temp->str);
temp->next = NULL;
if (trck != NULL)
{
	while (trck->next != NULL)
	{
		trck = trck->next;
	}
	trck = temp->next;
}
else
{
	*head = temp

}
return (temp);
}
