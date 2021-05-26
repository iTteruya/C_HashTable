#ifndef HASHTABLE_HASHTABLE_H
#define HASHTABLE_HASHTABLE_H

#include "hashtable_remove.h"
#include "hashtable_find.h"
#include "hashtable_insert.h"

struct HashTable *createHashTable();
void deleteHashTable(struct HashTable *table);


#endif //HASHTABLE_HASHTABLE_H
