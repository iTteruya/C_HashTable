#include "hashtable.h"

struct HashTable *createHashTable(){
    struct HashTable *table = (struct HashTable *) malloc(sizeof(*table));
    if (table == NULL) {
        printf("Error #1: Memory allocation failure while creating new hash map");
        exit(1);
    }

    for (int i = 0; i < TABLE_SIZE; i++){
        table->hashTable[i] = NULL;
    }
    return table;
}

void deleteHashTable(struct HashTable *table) {
    for (int i = 0; i < TABLE_SIZE; i++){
        if (table->hashTable[i] == NULL) {
            continue;
        } else {
            struct Entry *tmp = table->hashTable[i];
            while (tmp != NULL) {
                struct Entry *tmp2 = tmp -> next;
                free(tmp);
                tmp = tmp2;
            }
            free(tmp);
        }
    }
    free(table);
}
