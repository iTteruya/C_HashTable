#include "hashtable_insert.h"

bool insert(struct HashTable *table, struct Entry *entry){
    struct Entry *elem = (struct Entry *) malloc(sizeof(*elem));
    if (elem == NULL) {
        printf("Error #1: Memory allocation failure while adding new list element");
        exit(1);
    }
    if (entry == NULL) return false;
    int index = hash(entry -> key);
    struct Entry *tmp = table->hashTable[index];
    if ((tmp != NULL) && strncmp(entry -> key, tmp->key, MAX_STRING) == 0){
        table->hashTable[index] = entry;
    } else {
        entry->next = table->hashTable[index];
        table->hashTable[index] = entry;
    }
    return true;
}