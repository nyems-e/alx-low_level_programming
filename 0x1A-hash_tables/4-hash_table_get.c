#include "hash_tables.h"

/**
 * hash_table_get - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 * @key: argument_2 description
 *
 * Return: return description
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	ind = key_index((const unsigned char *) key, ht->size);
	if ((ht->array)[ind] == NULL)
		return (NULL);
	node = (ht->array)[ind];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
			node = node->next;
	}
	return (NULL);
}
