#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	struct hash_table_t* s = (struct hash_table_t*) malloc(sizeof(struct hash_table_t));
	s->array = (struct hash_node_t**) calloc(size, sizeof(struct hash_node_t*));
	s->size = size;
	return s;
}
