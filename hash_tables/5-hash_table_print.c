#include "hash_tables.h"

/**
 *  * hash_table_print - print a hash table
 *   *
 *    * @ht: the hash table
 *     *
 *      * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char coma = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (coma == 1)
				printf(", ");
															printf("'%s': '%s'", node->key, node->value);
															node = node->next;
															coma = 1;
		}
	}
	printf("}\n");

}
