#include "hashtable_find.h"

struct Entry *find(struct HashTable *table, char *key){
    int index = hash(key);
    struct Entry *tmp = table->hashTable[index];
    while (tmp != NULL && strncmp(tmp -> key, key, MAX_STRING) != 0){
        tmp = tmp -> next;
    }
    return tmp;
}
