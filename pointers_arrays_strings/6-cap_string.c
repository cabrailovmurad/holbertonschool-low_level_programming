#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int j, is_sep;

	while (str[i])
	{
		/* Check if it's the first character and is lowercase */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		else
		{
			is_sep = 0;
			for (j = 0; sep[j]; j++)
			{
				if (str[i - 1] == sep[j])
				{
					is_sep = 1;
					break;
				}
			}
			if (is_sep && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
