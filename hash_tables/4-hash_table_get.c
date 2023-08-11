#include "hash_tables.h"

/**
 *  * hash_table_get - retrieves a value associated with a key
 *   *
 *    * @ht: the hash table you want to look into
 *     * @key: the key we looking for
 *      *
 *       * Return: the value associated with the element, or NULL if key
 *        * couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
