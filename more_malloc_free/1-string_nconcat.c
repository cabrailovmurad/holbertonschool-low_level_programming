#include "main.h"

/**
 * string_nconcat - concatenates two strings, using at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: maximum bytes to use from s2
 *
 * Return: pointer to newly allocated string, or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (!result)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

