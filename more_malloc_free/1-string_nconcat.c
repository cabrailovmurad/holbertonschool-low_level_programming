#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings, using at most n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes to use from s2
 *
 * Return: pointer to new allocated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s1 = 0, len_s2 = 0, len_concat = 0;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);

    if (n >= len_s2)
        n = len_s2;

    len_concat = len_s1 + n;

    result = malloc(len_concat + 1);
    if (result == NULL)
        return (NULL);

    memcpy(result, s1, len_s1);
    memcpy(result + len_s1, s2, n);
    result[len_concat] = '\0';

    return (result);
}
