#ifndef HASHTABLE_HASHTABLE_STRUCT_H
#define HASHTABLE_HASHTABLE_STRUCT_H

#include "hashtable_entry.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TABLE_SIZE 16

struct HashTable{
    struct Entry *hashTable[TABLE_SIZE];
};

#endif //HASHTABLE_HASHTABLE_STRUCT_H
