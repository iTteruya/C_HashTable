#ifndef HASHTABLE_HASHTABLE_REMOVE_H
#define HASHTABLE_HASHTABLE_REMOVE_H

#include "hashtable_utils.h"

struct Entry *delete(struct HashTable *table, char *key);

void deleteAll(struct HashTable *table);

#endif //HASHTABLE_HASHTABLE_REMOVE_H
