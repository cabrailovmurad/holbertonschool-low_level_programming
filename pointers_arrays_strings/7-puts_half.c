#include "main.h"

/**
 * puts_half - Prints the second half of a string,
 * followed by a new line.
 * If the number of characters is odd, the function
 * prints from (length - 1) / 2 + 1.
 * @str: The input string.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
