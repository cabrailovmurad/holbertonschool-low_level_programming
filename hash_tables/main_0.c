#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check hash_djb2 function
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int hash;
    char *s;

    s = "Holberton";
    hash = hash_djb2((unsigned char *)s);
    printf("Hash of \"%s\": %lu\n", s, hash);

    s = "School!";
    hash = hash_djb2((unsigned char *)s);
    printf("Hash of \"%s\": %lu\n", s, hash);

    return (0);
}
