#include "test.h"

void test() {
    struct HashTable *table = createHashTable();

    testInsert(table);
}

void testInsert(struct HashTable *table){
    printf("\nRunning insert test:\n");
    printf("Empty table:\n");
    print_table(table);

    struct Entry string0 = {.key="John", .value=12};
    struct Entry string1 = {.key="Sara", .value=21};
    struct Entry string2 = {.key="Alex", .value=16};
    struct Entry string3 = {.key="Walter", .value=17};
    struct Entry string4 = {.key="White", .value=18};
    struct Entry string5 = {.key="Yellow", .value=14};

    printf("Adding pair John - 12:\n");
    insert(table, &string0);
    print_table(table);

    printf("Adding pair Sara - 21:\n");
    insert(table, &string1);
    print_table(table);

    printf("Adding pair Alex - 16:\n");
    insert(table, &string2);
    print_table(table);

    printf("Adding pair Walter - 17:\n");
    insert(table, &string3);
    print_table(table);

    printf("Adding pair White - 18:\n");
    insert(table, &string4);
    print_table(table);

    printf("Adding pair Yellow - 14:\n");
    insert(table, &string5);
    print_table(table);


    printf("Adding pair with already existing key to the table:\n");
    struct Entry string6 = {.key="John", .value=14};
    printf("Adding pair John - 14:\n");
    insert(table, &string6);
    print_table(table);

    printf("Showcasing collision:\n");
    struct Entry string7 = {.key="Program", .value=15};
    printf("Adding pair Program - 15:\n");
    insert(table, &string7);
    print_table(table);

    testFind(table);
}

void testFind(struct HashTable *table){
    printf("\nRunning find test:\n");
    print_table(table);

    char *key = "John";
    printf("Searching for the key: %s; found value for the key: %d\n", key, find(table, key)->value);

    key = "White";
    printf("Searching for the key: %s; found value for the key: %d\n", key, find(table, key)->value);

    key = "Alex";
    printf("Searching for the key: %s; found value for the key: %d\n", key, find(table, key)->value);

    key = "Sky";
    struct Entry *pair = find(table, key);
    printf("Searching for the key: %s; found value for the key: %s\n", key, pair == NULL ? "NULL" : "");

    testRemove(table);
}

void testRemove(struct HashTable *table){
    printf("\nRunning remove test:\n");
    print_table(table);

    char *key = "John";
    printf("Removing pair with key: %s\n", key);
    delete(table, key);
    print_table(table);

    key = "White";
    printf("Removing pair with key: %s\n", key);
    delete(table, key);
    print_table(table);

    key = "Alex";
    printf("Removing pair with key: %s\n", key);
    delete(table, key);
    print_table(table);

    key = "Sky";
    printf("Removing pair with key: %s\n", key);
    delete(table, key);
    print_table(table);

    printf("Removing all entries: \n");
    deleteAll(table);
    print_table(table);

    deleteHashTable(table);
}

