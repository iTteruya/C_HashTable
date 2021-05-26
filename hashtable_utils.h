#ifndef HASHTABLE_HASHTABLE_UTILS_H
#define HASHTABLE_HASHTABLE_UTILS_H

#include "hashtable_struct.h"
#include <stdio.h>


void print_table(struct HashTable *table);

unsigned int hash(char *key);


#endif //HASHTABLE_HASHTABLE_UTILS_H
