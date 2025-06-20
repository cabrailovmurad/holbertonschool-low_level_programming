#include "main.h"

/**
 * rev_string - reverses a string in-place
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	/* 1. Найди длину строки */
	while (s[len] != '\0')
		len++;

	/* 2. Меняй местами символы: s[0] с s[len-1], s[1] с s[len-2], и т.д. */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
