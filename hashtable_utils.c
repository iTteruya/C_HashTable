#include "hashtable_utils.h"

unsigned int hash(char *key){
    int length = strnlen(key, MAX_STRING);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++){
        hash_value += key[i];
        hash_value = (hash_value * key[i]) * 123 % TABLE_SIZE;
    }
    return hash_value;
}

void print_table(struct HashTable *table){
    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; i++){
        if (table->hashTable[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else {
            printf("\t%i\t ", i);
            struct Entry *tmp = table->hashTable[i];
            while (tmp != NULL) {
                printf("%s - %d; - ", tmp -> key, tmp ->value);
                tmp = tmp -> next;
            }
            printf("\n");
        }
    }
    printf("End\n");
}