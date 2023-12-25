#include "hash_tables.h"

/**
 * hash_table_set - short description
 *
 * Description: long description
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: return description
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node_n = NULL, *node_old = NULL;
	unsigned long int ind = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	node_n = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node_n == NULL)
		return (0);
	ind = key_index((const unsigned char *) key, ht->size);
	node_n->key = (char *) strdup(key);
	node_n->value = (char *) strdup(value);
	node_n->next = NULL;
	if ((ht->array)[ind] == NULL)
	{
		(ht->array)[ind] = node_n;
		return (1);
	}
	else
	{
		node_old = (ht->array)[ind];
		while (node_old)
		{
			if (strcmp(node_old->key, key) == 0)
			{
				free(node_old->value);
				node_old->value = (char *) strdup(value);
				free(node_n->key);
				free(node_n->value);
				free(node_n);
				return (1);
			}
			node_old = node_old->next;
		}
		node_old = (ht->array)[ind];
		node_n->next = node_old;
		(ht->array)[ind] = node_n;
		return (1);
	}
}
