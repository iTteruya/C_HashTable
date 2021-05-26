#include "hashtable_remove.h"

struct Entry *delete(struct HashTable *table, char *key){
    int index = hash(key);
    struct Entry *tmp = table->hashTable[index];
    struct Entry *prev = NULL;
    while (tmp != NULL && strncmp(tmp -> key, key, MAX_STRING) != 0){
        prev = tmp;
        tmp = tmp ->next;
    }
    if (tmp == NULL) return NULL;
    if (prev == NULL) {
        table->hashTable[index] = tmp -> next;
    } else {
        prev ->next = tmp ->next;
    }
    return tmp;
}

void deleteAll(struct HashTable *table){
    for (int i = 0; i < TABLE_SIZE; i++){
        if (table->hashTable[i] == NULL) {
            continue;
        } else {
            struct Entry *tmp = table->hashTable[i];
            while (tmp != NULL) {
                struct Entry *tmp2 = tmp->next;
                table->hashTable[i] = NULL;
                tmp = tmp2;
            }
        }
    }
}