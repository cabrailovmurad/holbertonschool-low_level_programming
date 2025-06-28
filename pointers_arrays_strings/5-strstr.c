#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i] && needle[i] != '\0')
		{
			i++;
		}

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
