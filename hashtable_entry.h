#ifndef HASHTABLE_HASHTABLE_ENTRY_H
#define HASHTABLE_HASHTABLE_ENTRY_H

#define MAX_STRING 256

struct Entry{
    char key[MAX_STRING];
    int value;
    //..can add other types of value

    struct Entry *next;//next entry in linked list
};

#endif //HASHTABLE_HASHTABLE_ENTRY_H
