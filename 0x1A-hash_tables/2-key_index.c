#include "hash_tables.h"

/**
 * key_index - gives the index of a hash key
 *
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);
	if (size != 0)
		return (hash_key % size);
	return (0);
}
