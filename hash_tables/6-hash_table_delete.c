#include "hash_tables.h"

/**
 *  * hash_table_delete - deletes a hash table
 *   *
 *    * @ht: the hash table
 *     *
 *      * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *delNode, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			delNode = ht->array[i];
			while (delNode != NULL)
			{
				tmp = delNode->next;
				free(delNode->value);
				free(delNode->key);
				free(delNode);
				delNode = tmp;
																																		}
		}
	}
	free(ht->array);
	free(ht);
}
