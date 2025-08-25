#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list
 * (for Chaining collision handling)
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function prototypes */

/* 0. Create a hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* 1. djb2 hash function */
unsigned long int hash_djb2(const unsigned char *str);

/* 2. Key -> index */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* 3. Add or update an element in the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* 4. Retrieve a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* 5. Print the hash table */
void hash_table_print(const hash_table_t *ht);

/* 6. Delete the hash table */
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
