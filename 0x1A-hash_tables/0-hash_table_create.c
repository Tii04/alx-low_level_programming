#include "hash_tables.h"

/*
 * hash_table_create - Creates a hash table.
 * @size: Specified size of array
 * Return: pointer to hash table. If error, NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsht;
	unsigned long int i;

	hsht = malloc(sizeof(hash_table_t));
	if (hsht == NULL)
	{
		return (NULL);
	}

	hsht->size = size;
	hsht->array = malloc(sizeof(hash_table_t *) * size);

	if (hsht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hsht->array[i] = NULL;

	return (hsht);
}
