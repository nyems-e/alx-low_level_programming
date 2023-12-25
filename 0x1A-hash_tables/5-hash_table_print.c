#include "hash_tables.h"

/**
 * hash_table_print - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int main_ind = 0;
	int main_arr, sub_arr;

	if (ht == NULL)
		return;
	printf("{");
	main_arr = 1;
	while (main_ind < ht->size)
	{
		if ((ht->array)[main_ind] == NULL)
			continue;
		if (!main_arr)
			printf(", ");
		node = (ht->array)[main_ind];
		sub_arr = 1;
		while (node)
		{
			if (!sub_arr)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			sub_arr = 0;
			node = node->next;
		}
		node = NULL;
		main_arr = 0;
		main_ind++;
	}
	printf("}\n");
}
