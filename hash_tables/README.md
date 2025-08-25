# Hash Tables Project

## Description
This project implements a simple hash table in C. A hash table is a data structure that allows storing key-value pairs and provides fast insertion, deletion, and lookup operations. This project will help you understand the underlying structure of Python dictionaries.

## Data Structures

### Hash Node
```c
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;
