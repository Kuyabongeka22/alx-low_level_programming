#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t* newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	newTable->size = size;

	newTable->array = malloc(sizeof(hash_node_t*) * size);
	if (newTable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;

	return (newTable);
}
