#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: uses _putchar to print a-z followed by a newline
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
