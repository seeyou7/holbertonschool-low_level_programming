#include "hash_tables.h"

/**
 *  * hash_table_set - add an element to the hash table
 *   *
 *    * @ht: the hash table you want to add or update the key/value to
 *     * @key: the key
 *      * @value: the value associated with the key
 *       *
 *   * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *dupValue;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	dupValue = strdup(value);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{

			free(ht->array[i]->value);
			ht->array[i]->value = dupValue;
			return (1);
		}														}
	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
																	return (0);
																}
	new->value = dupValue;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
