#include "hash_tables.h"

/**
 *  * hash_table_create - Create a hash table with a given size
 *   * @size: Size of the hash table array
 *    *
 *     * Return: A pointer to the newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t *table;

		if (size == 0)
			return (NULL);

		table = malloc(sizeof(hash_table_t));

		if (table == NULL)

			return (NULL);

		table->size = size;
		table->array = calloc(size, sizeof(hash_node_t *));

		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		return (table);
}
