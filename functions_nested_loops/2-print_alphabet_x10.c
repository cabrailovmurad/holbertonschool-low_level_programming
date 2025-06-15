#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
}
