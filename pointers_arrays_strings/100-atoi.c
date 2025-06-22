#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * Takes into account every '+' and '-' that
 * appears before the first digit.
 * @s: Pointer to the string to convert.
 *
 * Return: The integer value, or 0 if no digits found.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int found = 0;

	/* Walk through the string */
	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found = 1;
			break;
		}
		s++;
	}

	/* No digits => 0 */
	if (!found)
		return (0);

	/* Build the number */
	while (*s && (*s >= '0' && *s <= '9'))
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return ((int)(sign * num));
}
