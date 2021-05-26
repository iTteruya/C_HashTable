cmake_minimum_required(VERSION 3.17)
project(HashTable C)

set(CMAKE_C_STANDARD 99)

add_executable(HashTable main.c hashtable.h hashtable.c hashtable_entry.h hashtable_struct.h
        hashtable_utils.h hashtable_utils.c hashtable_insert.h hashtable_insert.c hashtable_remove.h
        hashtable_remove.c hashtable_find.c hashtable_find.h test.h test.c)