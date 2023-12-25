#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 *
 * Return: return NULL or Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_T;
	unsigned long int ind = 0;

	new_hash_T = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_hash_T == NULL)
		return (NULL);
	new_hash_T->size = size;
	new_hash_T->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_hash_T->array == NULL)
	{
		free(new_hash_T);
		return (NULL);
	}
	while (ind < size)
	{
		(new_hash_T->array)[ind] = NULL;
		ind++;
	}
	return (new_hash_T);
}
