#include "hash_tables.h"

/**
 * key_index - generates the key using hash_djb2
 * @key: pointer that points to the key
 * @size: Table size
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}
